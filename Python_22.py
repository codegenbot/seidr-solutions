```Python
from typing import List

def filter_integers() -> List[int]:
    values = []
    while True:
        user_input = input("Enter an integer or type 'done' to finish: ")
        if user_input.lower() == "done":
            break
        try:
            value = int(user_input)
            values.append(value)  # added condition here 
        except ValueError:
            print("Invalid input. Please enter a number or 'done'. Try again!")
    return values


print(filter_integers())