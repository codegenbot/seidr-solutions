```
from typing import List
import ast


def filter_integers() -> None:
    while True:
        cont = input("Do you want to filter integers again? (yes/no): ")
        if cont.lower() not in ["yes", "no"]:
            print(f"Invalid input. Please enter 'yes' or 'no'.")
            continue
        
        if cont.lower() != "yes":
            break

        while True:
            try:
                user_input = input("Enter a list: ")
                values = ast.literal_eval(user_input)
                if isinstance(values, List):
                    result = [value for value in values if isinstance(value, int)]
                    print(f"Integers found: {result}")
                    break
                else:
                    print(f"Invalid input. Please enter a valid Python expression.")
            except (ValueError, SyntaxError):
                print(f"Invalid input. Please enter a valid Python expression.")


filter_integers()