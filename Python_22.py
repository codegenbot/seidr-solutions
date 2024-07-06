```
from typing import List

def filter_integers(values: list) -> list:
    return [value for value in values if isinstance(value, int)]

values = input("Please enter a list of values separated by spaces (for example, 1 2 3 or abc def): ").split()

try:
    result = filter_integers([int(value) for value in values])
except ValueError:
    print("Invalid input. Please enter a list of valid integer values.")
else:
    print(result)