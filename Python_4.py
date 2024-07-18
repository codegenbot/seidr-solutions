from typing import List
def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

numbers = [2.5, 3.7, 1.8, 4.0, 2.0]
result = mean_absolute_deviation(numbers)
print(result)