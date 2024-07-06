from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len([num for num in numbers if num != 0]) == 0:
        return
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)