from typing import list, Any

def filter_integers(values: list) -> list:
    return [value for value in values if isinstance(value, int)]