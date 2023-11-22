from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

input_numbers = [1.2, 3.4, 5.6]

result = mean_absolute_deviation(input_numbers)

print(result)