```
from typing import List, Any


def filter_integers() -> None:
    while True:
        try:
            values = eval(input("Enter a list: "))
            return [value for value in values if isinstance(value, int)]
        except Exception as e:
            print(f"Invalid input. Please enter a list of integers or any other valid Python expression. Error: {e}")