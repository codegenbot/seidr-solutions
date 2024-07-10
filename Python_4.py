```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return 0
    mean = sum(numbers) / len(numbers)
    if len(numbers) > 1:
        return sum(abs(n - mean) for n in numbers) / len(numbers)
    else:
        return abs(numbers[0] - mean)