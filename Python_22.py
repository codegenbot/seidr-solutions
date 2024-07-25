```
from typing import List


def filter_integers() -> List[int]:
    values = []
    while True:
        user_input = input("Are you done? (yes/no): ").lower()
        if user_input == 'yes':
            break
        try:
            value = input(
                "Enter an integer (space-separated) or type 'done' to finish: "
            ).split()
            values.extend([int(i) for i in value])
        except ValueError:
            print("Invalid input. Please enter integers separated by spaces or 'done'.")
    return values

print(filter_integers())