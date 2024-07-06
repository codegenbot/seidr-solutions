```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) < 1:
        return "Invalid input. Please provide a non-empty list of numbers."
    
    if len(numbers) != len(set(numbers)):
        return "Invalid input. The program did not receive expected input"
    
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)