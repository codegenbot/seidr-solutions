```
from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    from statistics import mean as stat_mean
    mean = stat_mean(numbers)
    return sum(abs(n - mean) for n in numbers) / len(numbers)