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
                if value % 2 == 0:
                    values.append(value)
                break
            except ValueError:
                print("Invalid input. Please enter a number or 'done'. Try again!")
    return values


print(filter_integers())