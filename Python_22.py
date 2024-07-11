from typing import List

def filter_integers():
    while True:
        values = input("Enter a list of integers and/or strings separated by commas: ")
        values = [value.strip() for value in values.split(",")]
        print("Input received:", values)
        try:
            return [int(value) for value in values if value.replace('.', '',).replace('-', '',).isdigit()]
        except ValueError as e:
            print(f"Invalid input. Please enter integers and/or strings separated by commas: {e}")