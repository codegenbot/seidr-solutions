from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

input_numbers = input("Enter numbers separated by space: ").split()
numbers = [float(num) for num in input_numbers]
result = mean_absolute_deviation(numbers)
print("Mean Absolute Deviation:", result)