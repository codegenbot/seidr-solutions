from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

# Receive input as a space-separated string
input_string = input()

# Split the input string into a list of strings
input_numbers = input_string.strip().split()

# Convert the list of strings to a list of floating-point numbers
input_numbers = [float(num) for num in input_numbers]

output = rescale_to_unit(input_numbers)
print(*output)