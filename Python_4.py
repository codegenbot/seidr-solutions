from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) < 1:
        return 
    if len(numbers) != len(set(numbers)):
        return 
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)