```python
from typing import List

def filter_integers() -> List[int]:
    while True:
        values = input("Enter a list of values (separated by commas): ")
        num_list = []
        for x in values.split(","):
            try:
                num_list.append(int(x.strip()))
            except ValueError:
                print(f"Invalid input '{x.strip()}'. Please enter numbers separated by commas.")
                return []  # Return an empty list if invalid input is provided
        if all(isinstance(i, int) for i in num_list):
            return num_list
        print("Invalid input. Please enter numbers separated by commas.")