from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    total = 0
    for num in numbers:
        total += abs(num - mean)
    return total / len(numbers)