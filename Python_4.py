from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    numbers = [float(x) for x in input().split(',')]
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)