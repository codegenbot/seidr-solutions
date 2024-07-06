from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)

numbers_input = input("Enter space-separated floating point numbers: ")
numbers = list(map(float, numbers_input.split()))
print(mean_absolute_deviation(numbers))