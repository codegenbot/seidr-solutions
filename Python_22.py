```
from typing import List


def filter_integers() -> List[int]:
    values = []
    while True:
        try:
            value = input("Enter an integer (or 'done' if finished): ")
            if value.lower() == "done":
                break
            elif value.isdigit():  
                values.append(int(value))
            else:
                print("Invalid input. Please enter an integer or 'done'.")
        except ValueError:
            print("Invalid input. Please enter an integer or 'done'.")
    return values