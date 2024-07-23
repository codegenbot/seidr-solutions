from typing import List
import statistics


def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0

    avg = statistics.mean(numbers)
    return sum(abs(num - avg) for num in numbers)