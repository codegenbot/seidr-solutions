from typing import List
def mean_absolute_deviation(numbers: list[float]) -> float:
    if len(numbers) == 0:
        return None
    mean_val = sum(numbers)/len(numbers)
    total_deviation = sum([abs(num - mean_val) for num in numbers])
    return total_deviation / len(numbers)