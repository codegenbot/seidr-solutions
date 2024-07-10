```
from typing import List
import math


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return float('nan')
    mean = sum(numbers) / len(numbers)
    if len(numbers) > 1:
        return sum(abs(n - mean) for n in numbers) / len(numbers)
    else:
        return abs(numbers[0] - mean)