from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]


# Read input from user as a string
user_input = input()

# Split the input string into a list of values
values = user_input.split()

# Convert each value to an integer
values = [int(x) for x in values]

# Call the function with the updated values
result = filter_integers(values)

# Print the result
print(result)