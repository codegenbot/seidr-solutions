from typing import Any, list

def filter_integers() -> None:
    values = input("Enter some values separated by commas: ").split(',')
    result = [int(value) for value in values if value.isdigit()]
    print(f"Integers found: {result}")