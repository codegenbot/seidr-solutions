```
from typing import List


def filter_integers() -> List[int]:
    values = []
    while True:
        while True:
            user_input = input("Enter an integer or type 'done' to finish: ")
            if user_input.lower() == "done":
                break
            try:
                value = int(user_input)
                values.append(value)
                if user_input.lower() == "done":
                    break
                elif value % 2 != 0:
                    print("The number is not even, please enter a new one or 'done' to finish.")
            except ValueError:
                print("Invalid input. Please enter a number or 'done'. Try again!")
        if user_input.lower() == "done":
            break
    return values


print(filter_integers())