```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0

    try:
        mean = sum(numbers) / len(numbers)
        return sum(abs(num - mean) for num in numbers) / len(numbers)
    except ZeroDivisionError:
        return 'Error: Input list cannot be empty or contain zero values'
    except TypeError:
        return 'Error: All elements of the input list must be floats'