```
from typing import List


def filter_integers() -> List[int]:
    values = []
    while True:
        while True:
            user_input = input("Please enter an integer or 'done': ")
            if user_input.lower() == "done":
                break
            try:
                value = int(user_input)
                values.append(value)
                break
            except ValueError:
                print("Invalid input. Please enter an integer or 'done'.")
    return [i for i in values if i % 2 == 0]


print(filter_integers())