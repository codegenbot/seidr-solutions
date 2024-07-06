from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) < 1:
        return "Invalid input. Please provide a non-empty list of numbers."
    total = sum(abs(num - (sum(numbers) / len(numbers))) for num in numbers)
    return total / len(numbers)