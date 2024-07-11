```
from typing import Any, list

def filter_integers(values: list[Any]) -> list[int]:
    return [int(value) for value in values if isinstance(int(value), int)]

user_input = input("Please enter some values (separated by spaces): ")
values = [x.strip() for x in user_input.split()]
print(filter_integers([int(x) for x in values]))