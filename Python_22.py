from typing import List, Any


def filter_integers(values: List[Any]) -> list:
    values = input("Enter comma-separated integers (or any other data type): ").split(
        ","
    )
    return [int(value) for value in values if isinstance(int(value), int)]