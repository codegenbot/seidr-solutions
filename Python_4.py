from typing import List
def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    mdev = (sum(abs(num - mean) for num in numbers)) 
    return mdev / len(numbers)