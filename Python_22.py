from typing import Any


def filter_integers() -> list[int]:
    try:
        values = input("Enter a list of values (separated by commas): ")
        return [int(x) for x in values.split(",") if isinstance(int(x), int)]
    except ValueError:
        return []