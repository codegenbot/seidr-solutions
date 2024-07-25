```
from typing import List


def filter_integers() -> List[int]:
    values = []
    while True:
        try:
            input_val = input(
                "Enter an integer (space-separated) or type 'done' to finish: "
            )
            if input_val.lower() == "done":
                break
            values.extend([int(i) for i in input_val.split()])
        except ValueError:
            print("Invalid input. Please enter integers separated by spaces or 'done'.")
    return values