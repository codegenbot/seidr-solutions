from typing import Any, list

def filter_integers(values: list[Any]) -> list[int]:
    return [int(value) for value in values if isinstance(value, str) and value.isdigit()]

user_input = input("Please enter some values (separated by spaces): ")
values = [x.strip() for x in user_input.split()]
print(filter_integers(values))