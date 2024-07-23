```
from typing import List

def filter_integers() -> List[int]:
    while True:
        values = input("Enter a list of values (separated by commas): ")
        if not values.strip():
            print("Invalid input. Please enter numbers separated by commas.")
            continue
        try:
            num_list = [int(x) for x in values.split(",")]
        except ValueError:
            print("Invalid input. Please enter integers separated by commas.")
            continue
        return num_list