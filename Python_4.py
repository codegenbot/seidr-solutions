```
from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    from statistics import mean
    m = mean(numbers)
    return sum(abs(num - m) for num in numbers) / len(numbers)