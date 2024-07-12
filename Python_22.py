```
from typing import List
import ast


def filter_integers() -> List[int]:
    while True:
        try:
            values = eval(input("Enter a list: "))
            return [value for value in values if isinstance(value, int)]
        except (SyntaxError, NameError):
            print(f"Invalid input. Please enter a valid Python expression.")