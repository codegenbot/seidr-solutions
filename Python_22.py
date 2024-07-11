from typing import Any, list

def filter_integers(values: list[Any]) -> list[int]:
    return [value for value in values if isinstance(value, int)]

user_input = input("Please enter some values (separated by spaces): ")
values = [int(x) for x in user_input.split() if x.isdigit()]
print(filter_integers(values))