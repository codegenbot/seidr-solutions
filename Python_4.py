```
from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    from typing import List
    from statistics import mean as calculate_mean
    mean = calculate_mean(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)