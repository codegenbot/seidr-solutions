```Python
from typing import List


def concatenate(strings: List[str]) -> str:
    user_strings = []

    while True:
        user_input = input("Enter a string or 'q' to quit: ")

        if user_input.lower() == "q":
            break

        try:
            user_strings.extend([s.strip() for s in user_input.split(",")])
        except ValueError:
            print("Invalid input. Please enter a list of strings separated by commas.")

    return "".join(user_strings)