```
from typing import List


def filter_integers() -> List[int]:
    values = []
    while True:
        user_input = input(
            "Enter an integer (space-separated) or type 'done' to finish: "
        ).lower()
        if user_input == "done":
            break
        try:
            value = [int(i) for i in user_input.split()]
            values.extend(value)
        except ValueError:
            print("Invalid input. Please enter integers separated by spaces or 'done'.")
    return values