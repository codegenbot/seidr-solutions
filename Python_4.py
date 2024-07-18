from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

numbers = list(map(float, input("Enter numbers separated by space: ").split()))
result = mean_absolute_deviation(numbers)
print(result)