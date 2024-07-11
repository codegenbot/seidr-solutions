```
from typing import Any, list


def filter_integers(values: list[Any]) -> list[int]:
    return [value for value in values if isinstance(value, int)]


user_input = input("Please enter some values (separated by spaces): ")
if not user_input:
    print("No input provided.")
else:
    try:
        values = [int(x) for x in user_input.split()]
    except ValueError as e:
        print(f"Invalid input: {e}")
        values = []
print(filter_integers(values))