from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    if not all(isinstance(x, float) for x in numbers):
        raise ValueError("Input should be a list of float numbers")
    return sum(abs(x - (sum(numbers) / len(numbers)) for x in numbers) / len(numbers)