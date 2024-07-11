import statistics
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    return statistics.mean(abs(i - statistics.mean(numbers)) for i in numbers)