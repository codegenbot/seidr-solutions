from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float("inf")
    result = None
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result

try:
    numbers = list(map(float, input().split()))
    if len(numbers) < 2:
        raise ValueError("Please input at least two numbers.")
    output = find_closest_elements(numbers)
    print(output[0])
    print(output[1])
except ValueError as e:
    print(e)