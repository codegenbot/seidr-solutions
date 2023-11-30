from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]

# Read input from the user
input_values = input().split()

# Convert input_values to integers
values = [int(value) for value in input_values]

# Call the filter_integers function with the values
result = filter_integers(values)

# Print the result
print(result)