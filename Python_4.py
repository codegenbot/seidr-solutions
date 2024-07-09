from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    assert all(isinstance(num, float) for num in numbers), "Input must be a list of float numbers"
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)