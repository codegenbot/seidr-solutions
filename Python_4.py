from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)

numbers = [1.2, 3.4, 5.6]  # Replace with your input list of numbers
result = mean_absolute_deviation(numbers)
print(result)