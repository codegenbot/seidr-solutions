```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return "Invalid input. Please provide a non-empty list of numbers."
    elif len(numbers) < 1:
        return "Invalid input. Please provide at least one number."
    else:
        mean = sum(numbers) / len(numbers)
        return sum(abs(num - mean) for num in numbers) / len(numbers)