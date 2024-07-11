from typing import list

def mean_absolute_deviation(numbers: list[float]) -> float:
    avg = sum(numbers) / len(numbers)
    return sum(abs(num - avg) for num in numbers) / len(numbers)