```
from typing import List, Any

def filter_integers(values: list) -> list:
    return [value for value in values if isinstance(value, int)]

values = input("Enter values (separated by spaces): ")
values = [value.strip() for value in values.split(",")]
print(filter_integers(values))