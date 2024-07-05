from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

# Read input from user, split by whitespace and convert each to corresponding type
raw_input = input("Enter values separated by space: ")
values = [eval(x) for x in raw_input.split()]

# Call the function and print the result
print(filter_integers(values))