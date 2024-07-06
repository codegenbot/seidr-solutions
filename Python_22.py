from typing import list, any

def filter_integers(values: list[any]) -> list[int]:
    values = list(input("Enter some numbers (space-separated): ").split())
    return [value for value in values if isinstance(int(value), int)]

print(filter_integers([]))