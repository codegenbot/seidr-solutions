```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0

    try:
        mean = sum(numbers) / len(numbers)
        return sum(abs(num - mean) for num in numbers) / len(numbers)
    except (ZeroDivisionError, TypeError):
        return 'Error: Input list must not be empty and contain only numeric values'