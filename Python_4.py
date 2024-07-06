from typing import list, float

def mean_absolute_deviation(numbers: list[float]) -> float:
    if len(numbers) > 0:
        mean = sum(numbers) / len(numbers)
        return sum(abs(num - mean) for num in numbers) / len(numbers)
    else:
        return None