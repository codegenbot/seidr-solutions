from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    numbers_mean = sum(numbers) / len(numbers)
    return sum(abs(num - numbers_mean) for num in numbers) / len(numbers)