from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Get input from user
numbers = list(map(float, input("Enter a list of numbers separated by spaces: ").split())

# Call the function with user input
result = mean_absolute_deviation(numbers)

# Print the result
print(f"Mean absolute deviation: {result}")