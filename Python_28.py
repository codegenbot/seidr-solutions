from typing import List


def concatenate(strings: List[str]) -> str:
    user_input = input("Enter a list of strings separated by commas or 'q' to quit: ")
    while True:
        if user_input.lower() == "q":
            return
        try:
            strings = [s.strip() for s in user_input.split(",")]
            break
        except ValueError:
            print("Invalid input. Please enter a list of strings separated by commas.")
    return "".join(strings)