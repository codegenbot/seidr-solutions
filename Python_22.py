from typing import List


def filter_integers() -> List[int]:
    values = []
    while True:
        try:
            value = int(input("Enter an integer (or 'done' if finished): "))
            values.append(value)
        except ValueError:
            user_input = input("Invalid input. Try again or enter 'done' to finish: ")
            if user_input == "done":
                break
    return [value for value in values]