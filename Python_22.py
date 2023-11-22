from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

# Read input from user
values = input().split()

# Convert each value to an integer
values = [int(x) for x in values]

# Call the function with the updated values
result = filter_integers(values)

# Print the result
print(result)