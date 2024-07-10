from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)

numbers = [1, 2, 3]
print(mean_absolute_deviation(numbers))