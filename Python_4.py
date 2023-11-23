from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)

numbers_input = input("Enter numbers separated by spaces: ")
numbers = [float(x) for x in numbers_input.split()]
result = mean_absolute_deviation(numbers)
print(result)