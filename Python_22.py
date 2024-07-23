```
from typing import Any


def filter_integers() -> list[int]:
    while True:
        try:
            values = input("Enter a list of values (separated by commas): ")
            result = [int(x) for x in values.split(",") if x.strip()]
            if not result:  
                print("Invalid input. Please enter numbers separated by commas.")
            else:
                return result
        except ValueError:
            print("Invalid input. Please enter numbers separated by commas.")