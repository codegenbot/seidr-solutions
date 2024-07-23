```
from typing import Any


def filter_integers() -> list[int]:
    while True:
        try:
            values = input("Enter a list of values (separated by commas): ")
            num_list = [int(x) for x in values.split(",") if x.strip()]
            if all(isinstance(i, int) for i in num_list):
                return num_list
            else:
                print("Invalid input. Please enter only integers separated by commas.")
        except ValueError:
            print("Invalid input. Please enter numbers separated by commas.")