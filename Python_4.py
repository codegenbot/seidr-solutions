from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) < 1:
        return "Invalid input. Please provide a non-empty list of numbers."
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers) if len(numbers) > 0 else "Error: List is empty."