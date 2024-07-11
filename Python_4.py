from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    average = sum(numbers) / len(numbers)
    return sum(abs(num - average) for num in numbers) / len(numbers)