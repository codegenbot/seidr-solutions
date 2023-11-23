from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return deviation


user_input = input("Enter numbers separated by spaces: ")
numbers = [float(num) for num in user_input.split()]
result = mean_absolute_deviation(numbers)
print(result)