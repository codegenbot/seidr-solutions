```
from typing import Any


def filter_integers() -> list[int]:
    while True:
        try:
            values = input("Enter a list of values (separated by commas): ")
            num_list = [
                int(x)
                for x in values.split(",")
                if x.strip() and x.strip().replace(",", "").isdigit()
            ]
            if not num_list:  
                print("Please enter at least one number.")
            else:
                return num_list
        except ValueError:
            print("Invalid input. Please enter numbers separated by commas.")