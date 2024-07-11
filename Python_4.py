```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return 0
    for num in numbers:
        if not isinstance(num, (int, float)):
            return "Invalid input. Please enter a list of numbers."
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)