import statistics
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    return statistics.mean([abs(num - statistics.mean(numbers)) for num in numbers])