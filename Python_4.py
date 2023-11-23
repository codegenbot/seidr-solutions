from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)

numbers_str = input()
numbers = list(map(float, numbers_str.split()))
result = mean_absolute_deviation(numbers)
print(result)