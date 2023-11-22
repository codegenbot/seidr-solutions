from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

# Read input from user
input_values = input().split()

# Convert input values to integers
values = [int(x) for x in input_values]

# Call the filter_integers function and print the result
print(filter_integers(values))