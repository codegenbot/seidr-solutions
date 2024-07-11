from typing import List
import math


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    mad = sum(abs(num - mean) for num in numbers) / len(numbers) if len(numbers) else 0
    return (
        sum(abs(num - mean) for num in numbers) / len(numbers) or math.nan
        if not numbers
        else mad
    )


input_numbers = list(map(float, input("Enter numbers separated by space: ").split()))
mean_absolute_deviation(input_numbers)