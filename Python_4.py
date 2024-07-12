from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

numbers = [float(num) for num in input("Enter space-separated numbers: ").split()]

result = mean_absolute_deviation(numbers)
print(result)