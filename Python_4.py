from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

numbers = [3.5, 4.7, 2.9, 6.1, 8.3]
result = mean_absolute_deviation(numbers)
print(result)