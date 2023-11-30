from typing import List, Union

def mean_absolute_deviation(numbers: List[Union[float, int]]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

numbers_input = input("Enter the numbers (separated by spaces): ").split()
numbers = [float(num) for num in numbers_input]
result = mean_absolute_deviation(numbers)

print("The mean absolute deviation is:", result)