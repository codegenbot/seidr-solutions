from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) < 2:
        raise ValueError("At least two numbers are required")
    numbers.sort()
    min_diff = float("inf")
    closest_pair = (numbers[0], numbers[1])
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])
    return closest_pair

try:
    numbers = list(map(float, input().strip().split()))
    result = find_closest_elements(numbers)
    print(result)
except ValueError as e:
    print(e)