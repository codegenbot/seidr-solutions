```
from typing import List


def concatenate():
    user_input = input("Enter a list of strings separated by commas or 'q' to quit: ")
    if user_input.lower() == "q":
        return
    try:
        strings = [s.strip() for s in user_input.split(",")]
        print("".join(strings))
    except ValueError:
        print("Invalid input. Please enter a list of strings separated by commas.")


concatenate()