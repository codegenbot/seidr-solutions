from typing import Any


def filter_integers() -> list[int]:
    while True:
        try:
            values = input("Enter a list of values (separated by commas): ")
            return [int(x) for x in values.split(",") if x.strip()]
        except ValueError:
            print("Invalid input. Please enter numbers separated by commas.")