from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

# Read input from user as a string
input_str = input()

# Separate the input string by spaces to get a list of strings
values_str = input_str.split()

# Convert each string value to an integer
values = [int(x) for x in values_str]

# Call the function with the updated values
result = filter_integers(values)

# Print the result
print(result)