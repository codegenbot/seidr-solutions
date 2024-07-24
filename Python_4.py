from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

input_data = "1 2 3 4 5"
numbers = list(map(float, input_data.split()))
result = mean_absolute_deviation(numbers)
print(result)