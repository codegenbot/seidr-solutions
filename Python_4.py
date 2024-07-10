```Python
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    from typing import List

    mean = sum(numbers) / len(numbers)
    return (sum(abs(n - mean) for n in numbers)) / len(numbers)