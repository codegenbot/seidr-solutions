```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return 0

    total = sum(numbers)
    count = len(numbers)

    mean = total / count

    total_mad = sum(abs(n - mean) for n in numbers)
    mad = total_mad / count

    return mad