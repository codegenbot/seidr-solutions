from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0
    total = sum(abs(num - mean) for num in numbers)
    count = len(numbers)
    return total / count