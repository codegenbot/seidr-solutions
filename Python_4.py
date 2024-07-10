from typing import list

def mean_absolute_deviation(numbers: list[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(n - mean) for n in numbers) / len(numbers)