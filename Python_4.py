from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

input_numbers = [1.5, 2.5, 3.5, 4.5, 5.5]  # sample input

result = mean_absolute_deviation(input_numbers)

print(result)