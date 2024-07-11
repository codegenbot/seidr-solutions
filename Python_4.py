```
from typing import List
import math


def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return math.nan

    mean = sum(numbers) / len(numbers)
    mad = sum(abs(num - mean) for num in numbers) / len(numbers)

    return mad


input_numbers = list(map(float, input("Enter numbers separated by space: ").split()))
mean_absolute_deviation(input_numbers)