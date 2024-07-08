```
from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    while True:
        user_input = input("Enter a list of strings separated by commas or 'q' to quit: ")
        if user_input.lower() == "q":
            return result
        try:
            new_strings = [s.strip() for s in user_input.split(",")]
            result += "".join(new_strings)
            break
        except ValueError:
            print("Invalid input. Please enter a list of strings separated by commas.")
    return result