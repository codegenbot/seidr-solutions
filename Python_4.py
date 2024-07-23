```Python
from typing import List
import statistics


def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0

    return statistics.mean_abs_deviation(numbers)