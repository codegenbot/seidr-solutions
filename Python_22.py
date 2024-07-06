from typing import list, object

def filter_integers(values: list[object]) -> list[int]:
    return [value for value in values if isinstance(value, int)]