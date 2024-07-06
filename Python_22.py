```
from typing import List, Any

def filter_integers() -> list:
    values = input("Enter a series of comma-separated integers: ")
    value_list = [int(x) for x in values.split(",")]
    return [value for value in value_list if isinstance(value, int)]

print(filter_integers())