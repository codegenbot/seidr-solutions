from typing import List

def filter_integers() -> List[int]:
    while True:
        try:
            values = input("Enter a list of values (separated by commas): ")
            num_list = [int(x) for x in values.split(",") if x.strip().replace(",", "").isdigit()]
            return num_list
        except ValueError:
            print("Invalid input. Please enter numbers separated by commas.")