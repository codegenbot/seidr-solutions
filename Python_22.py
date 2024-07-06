```
from typing import List, Any

def filter_integers(values: list) -> list:
    return [value for value in values if isinstance(value, int)]

user_input = input("Please enter a comma-separated list of integers or any other data type:\n")

values_list = [x.strip() for x in user_input.split(',')]

print(filter_integers([int(x) for x in values_list]))