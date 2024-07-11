```
from typing import List

def filter_integers():
    while True:
        try:
            values = input("Enter a list of integers and/or strings separated by commas: ")
            values = [value.strip() for value in values.split(",")]
            print("Input received:", values)
            if all((value.replace('.', '',).replace('-', '',).isdigit()) or value.isalpha() for value in values):
                int_values = [int(value) for value in values]
                if any(isinstance(i, int) for i in int_values):
                    return int_values
                else:
                    print("Invalid input. Please enter integers and/or strings separated by commas.")
            else:
                print("Invalid input. Please enter integers and/or strings separated by commas.")
        except ValueError as e:
            print(f"Invalid input. Please enter integers and/or strings separated by commas: {e}")