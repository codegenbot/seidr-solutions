```Python
from typing import List


def filter_integers() -> List[int]:
    while True:
        values = input("Enter a list of integers (separated by commas): ")
        if not values.strip():
            print("Invalid input. Please enter numbers separated by commas.")
            continue

        num_list = [
            int(x) for x in values.split(",") if x.strip().replace(",", "").isdigit()
        ]

        # Check if the number of values entered is equal to the number of integers parsed.
        if len(num_list) != len([x for x in values.split(",")]):
            print("Invalid input. Please enter numbers separated by commas.")
            continue

        if all(isinstance(i, int) for i in num_list):
            return num_list
        else:
            print("Invalid input. The following values were not integers: ")
            for value in set(
                [value for value in num_list if not isinstance(value, int)]
            ):
                print(f"{value}")
            print("Please retry.")
            input("Press Enter when ready.")