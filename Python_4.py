from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

# Read input from the user
input_numbers = input().split()

# Convert the input to floats
numbers = [float(num) for num in input_numbers]

# Call the function with the input
result = mean_absolute_deviation(numbers)

# Print the result
print(result)