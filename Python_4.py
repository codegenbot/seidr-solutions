```Python
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) < 1:
        return sum(abs(num - sum(numbers) / len(numbers)) for num in numbers) / len(numbers)
    return sum(abs(num - sum(numbers) / len(numbers)) for num in numbers) / len(numbers)