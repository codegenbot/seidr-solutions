from typing import List, Union

def mean_absolute_deviation(numbers: List[Union[float, int]]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

# Read numbers from input
numbers = input("Enter a list of numbers separated by spaces: ").split()

# Convert input to integers or floats
numbers = [int(num) if num.isdigit() else float(num) for num in numbers]

# Call the function with the input
result = mean_absolute_deviation(numbers)
print("Mean Absolute Deviation is:", result)