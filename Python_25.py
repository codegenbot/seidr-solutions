from typing import List


def get_user_choice() -> str:
    while True:
        user_input = input("Enter 'yes' to continue or 'no' to exit: ")
        if user_input.lower() in ["yes", "y"]:
            return "yes"
        elif user_input.lower() in ["no", "n"]:
            return "no"