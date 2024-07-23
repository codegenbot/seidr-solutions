```
from typing import list

def filter_by_prefix(strings: list) -> list:
    if not isinstance(prefix := input("Enter prefix: "), str):
        raise ValueError("Invalid input")
    return [s for s in strings if s.startswith(prefix)]