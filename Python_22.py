from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

# Read input
input_values = input().split()

# Convert input values to their corresponding types (int if possible)
values = [int(v) if v.isdigit() else v for v in input_values]

# Filter integers using the function and print them
print(filter_integers(values))