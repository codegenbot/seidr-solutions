```Python
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0.0
    
    mean = sum(numbers) / len(numbers)
    
    if mean == 0.0:
        return 0.0
    
    return sum(abs(num - mean) for num in numbers) / len(numbers)