from typing import List, Tuple


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    if not numbers or len(numbers) < 2:
        return (0.0, 0.0)

    numbers.sort()
    min_diff = float("inf")
    result = (0.0, 0.0)
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result


# Sample input list for testing
numbers = [1.5, 3.0, 2.0, 8.7, 5.2]

print(find_closest_elements(numbers))