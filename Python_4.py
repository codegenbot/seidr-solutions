from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)

numbers = input().split()
numbers = [float(num) for num in numbers]

result = mean_absolute_deviation(numbers)
print(result)