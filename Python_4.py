```
from typing import List

def mean_absolute_deviation(numbers: List[str]) -> float:
    numbers = [float(num) for num in numbers]
    
    if not numbers:
        return float('nan')
    
    try:
        mean = sum(numbers) / len(numbers)
        mad = sum(abs(num - mean) for num in numbers) / len(numbers)
        return mad
    except ZeroDivisionError:
        return float('nan')