from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

# Read input from user
input_numbers = input("Enter the numbers (separated by space): ").split()
# Convert the input numbers to floating-point values
numbers = [float(num) for num in input_numbers]
# Call the function with the input numbers
result = rescale_to_unit(numbers)
# Print the result
print(result)