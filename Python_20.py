from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float("inf")
    result = (0.0, 0.0)
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result

# Input validation check
try:
    numbers = list(map(float, input().split()))
    result = find_closest_elements(numbers)
    print(result)
except ValueError:
    print("Invalid input. Please enter only floating-point numbers separated by spaces.")