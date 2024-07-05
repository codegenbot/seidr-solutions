from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

# Read input from user and split into a list of strings
user_input = input("Enter values separated by spaces: ").split()

# Convert input strings to appropriate types
parsed_input = []
for item in user_input:
    try:
        # Try converting to an integer
        parsed_input.append(int(item))
    except ValueError:
        # If it fails, just append the string
        parsed_input.append(item)

# Call the function and print the result
print(filter_integers(parsed_input))