from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0
    numbers = [float(num) for num in numbers]
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)