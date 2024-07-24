```
from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0
    total = sum(abs(num - sum(numbers) / len(numbers)) for num in numbers)
    count = len(numbers)
    return total / count if count > 0 else 0