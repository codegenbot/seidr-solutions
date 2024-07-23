```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return 0
    mean = sum(numbers) / len(numbers)
    return (sum(abs(num - mean) for num in numbers)) / len(numbers)


numbers = list(map(float, input("Enter numbers separated by space: ").split()))
result = mean_absolute_deviation(numbers)
print(result)