```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if not isinstance(numbers, list) or len(numbers) == 0:
        return "Error: Please provide a non-empty list of numbers."
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)