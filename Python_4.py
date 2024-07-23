```
from typing import List
import statistics


def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0

    try:
        avg = statistics.mean(numbers)
        return statistics.mean([abs(num - avg) for num in numbers])
    except TypeError:
        print("Invalid input. Please provide a list of numeric values.")
        return None