from typing import Any, list

def filter_integers() -> None:
    values = input("Please enter some values (space separated): ")
    values = [value.strip() for value in values.split(",")]
    print([value for value in values if isinstance(value, int)])

filter_integers()