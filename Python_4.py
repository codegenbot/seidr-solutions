```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    numbers = [float(x) for x in input("Enter space-separated numbers: ").split()]
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)

print(mean_absolute_deviation([1, 2, 3, 4, 5]))