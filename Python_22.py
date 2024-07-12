from typing import List
import ast


def filter_integers() -> List[int]:
    while True:
        try:
            user_input = input("Enter a list: ")
            if user_input:  
                values = ast.literal_eval(user_input)
                if isinstance(values, list):
                    return [value for value in values if isinstance(value, int)]
                else:
                    print(f"Invalid input. Please enter a valid Python expression representing a list.")
            else:
                print("Please provide some input.")
        except (ValueError, SyntaxError):
            print(f"Invalid input. Please enter a valid Python expression.")