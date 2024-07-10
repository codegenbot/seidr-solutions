from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    return sum(abs(x - sum(numbers) / len(numbers)) for x in numbers) / len(numbers)