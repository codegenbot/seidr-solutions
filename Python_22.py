from typing import Any, list

def filter_integers(values: Any) -> list[int]:
    if isinstance(values, list):
        return [value for value in values if isinstance(value, int)]
    else:
        raise ValueError("Expected a list input. Received {}".format(type(values)))