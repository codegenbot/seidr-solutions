from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if not isinstance(numbers, list) or not all(isinstance(x, float) for x in numbers):
        raise ValueError("Invalid input. Please provide a list of floats.")
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)