from typing import Any, list


def filter_integers(values: list[Any]) -> list[int]:
    return [value for value in values if isinstance(value, int)]


values = []
while True:
    user_input = input("Please enter some values (separated by spaces), or 'done' to finish: ")
    try:
        new_values = [int(x) for x in user_input.split()]
        values.extend(new_values)
    except ValueError as e:
        print(f"Invalid input: {e}")
    if user_input.lower() == 'done':
        break

print(filter_integers(values))