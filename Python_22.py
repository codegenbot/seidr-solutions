from typing import List, Any

def filter_integers(values: list) -> list:
    values = input("Enter values (separated by spaces): ")
    values = [value.strip() for value in values.split(",")]
    return [value for value in values if isinstance(int(value), int)]