from typing import List, Union

def mean_absolute_deviation(numbers: List[Union[float, int]]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

numbers = input().split(",")
numbers = [float(num.strip()) for num in numbers]
result = mean_absolute_deviation(numbers)
print(result)