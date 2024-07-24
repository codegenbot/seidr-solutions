```
from typing import List

def filter_integers() -> List[int]:
    while True:
        values = input("Enter a list of integers (separated by commas): ")

        if not values.strip():
            print("Invalid input. Please enter numbers separated by commas.")
            continue

        try:
            num_list = [int(x) for x in values.split(",")]
        except ValueError:
            print("Invalid input. The following values were not integers: ")
            for value in set([value for value in values.split(",") if not value.replace(",", "").isdigit()]):
                print(f"{value}")
            continue

        if len(num_list) != len(set(num_list)):
            print("Duplicate integers found in the list.")
            return []
        else:
            return num_list