from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return "Input list is empty"

    total = sum(num for num in numbers)

    try:
        mean = total / len(numbers)
    except ZeroDivisionError:
        return "List cannot be empty or all values must be zero"

    return sum(abs(num - mean) for num in numbers) / len(numbers)