from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

# Read input values from the user
values = input("Enter the values separated by space: ").split()

# Convert input values to integers
values = [int(x) for x in values]

# Call the filter_integers function
result = filter_integers(values)

# Print the result
print(result)