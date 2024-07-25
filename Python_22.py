from typing import List


def filter_integers() -> List[int]:
    values = []
    while True:
        try:
            value = input("Enter an integer (or 'done' if finished): ")
            if value.lower() == "done":
                break
            values.append(int(value))
        except ValueError:
            print("Invalid input. Please enter an integer or 'done'.")
    return values