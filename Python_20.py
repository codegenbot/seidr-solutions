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

# Sample input and function call
numbers = [3.7, 1.2, 2.5, 5.4, 4.1]
print(find_closest_elements(numbers))