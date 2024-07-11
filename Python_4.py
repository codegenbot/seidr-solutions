```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return 0
    average = sum(numbers) / len(numbers)
    return sum(abs(num - average) for num in numbers) / len(numbers)