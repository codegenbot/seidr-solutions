```
from typing import List
import ast


def filter_integers() -> List[int]:
    while True:
        try:
            user_input = input("Enter a list: ")
            values = ast.literal_eval(user_input)
            if isinstance(values, list):
                even_numbers = [value for value in values if isinstance(value, int) and value % 2 == 0]
                odd_numbers = [value for value in values if isinstance(value, int) and value % 2 != 0]
                print(f"Even numbers: {even_numbers}")
                print(f"Odd numbers: {odd_numbers}")
                return even_numbers
            else:
                print(f"Invalid input. Please enter a valid Python expression representing a list.")
        except (ValueError, SyntaxError):
            print(f"Invalid input. Please enter a valid Python expression.")