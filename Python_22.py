from typing import List, Any

def filter_integers():
    while True:
        values = input("Enter a list of integers and/or strings separated by commas: ")
        try:
            values = [value.strip() for value in values.split(",")]
            return [int(value) for value in values if value.replace('.', '',).replace('-', '',).isdigit()]
        except ValueError:
            print("Invalid input. Please enter only integers and/or strings.")

print(filter_integers())