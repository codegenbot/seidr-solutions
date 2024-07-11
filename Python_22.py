```
from typing import List, Any

def filter_integers():
    while True:
        try:
            values = input("Enter a list of integers and/or strings separated by commas: ")
            values = [value.strip() for value in values.split(",")]
            print("Input received:", values)
            if all(value.replace('.', '',).replace('-', '',).isdigit() for value in values):
                return [int(value) for value in values]
            else:
                raise ValueError
        except ValueError as e:
            print(f"Invalid input. Please enter integers and/or strings separated by commas: {e}")