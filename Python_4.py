from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [(num - mean) for num in numbers]
    return sum(abs(num) for num in deviation) / len(deviation)