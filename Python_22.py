```
from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]

user_input = input("Enter some values (separated by spaces): ")
values = [val.strip() for val in user_input.split()]
filtered_values = filter_integers([int(val) for val in values if val.isdigit()])
print("Filtered integers: ", filtered_values)