from typing import List
import ast


def filter_integers() -> None:
    while True:
        try:
            cont = input("Do you want to filter integers again? (yes/no): ")
            if cont.lower() not in ["yes", "no"]:
                user_input = input("Enter a list: ")
                values = ast.literal_eval(user_input)
                if isinstance(values, List):
                    result = [value for value in values if isinstance(value, int)]
                    print(f"Integers found: {result}")
                else:
                    print(f"Invalid input. Please enter a valid Python expression.")
            elif cont.lower() != "yes":
                break
        except (ValueError, SyntaxError):
            print(f"Invalid input. Please enter a valid Python expression.")


filter_integers()