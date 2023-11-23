from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)

numbers = input("Enter numbers separated by spaces: ").split()
numbers = [float(x) for x in numbers]
result = mean_absolute_deviation(numbers)
print(result)