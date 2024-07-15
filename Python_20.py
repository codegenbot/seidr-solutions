from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    return min(zip(numbers, numbers[1:]), key=lambda x: abs(x[0] - x[1]))

numbers = list(map(float, input().split()))
result = find_closest_elements(numbers)
print(result)