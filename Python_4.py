from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation_sum = sum(abs(num - mean) for num in numbers)
    return deviation_sum / len(numbers)