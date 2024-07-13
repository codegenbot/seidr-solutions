from typing import List
import ast


def filter_integers() -> None:
    while True:
        try:
            user_input = input("Enter a Python expression: ")
            if user_input.strip() != "":
                values = ast.literal_eval(user_input)
                if isinstance(values, list):
                    result = [value for value in values if isinstance(value, int)]
                    print(f"Integers found: {result}")
                    cont = input("Do you want to filter integers again? (yes/no): ")
                    if cont.lower() != "yes":
                        break
                else:
                    print(
                        f"Invalid input. Please enter a valid Python expression."
                    )
            else:
                print("Please provide some input.")
        except (ValueError, SyntaxError):
            print(f"Invalid input. Please enter a valid Python expression.")

filter_integers()