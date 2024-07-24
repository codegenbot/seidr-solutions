```
from typing import List
import statistics

def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0
    try:
        average = statistics.mean(numbers)
        total = sum(abs(num - average) for num in numbers)
        return total / len(numbers)
    except TypeError:
        return "Invalid input. Please enter a list of numbers."