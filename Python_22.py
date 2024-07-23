Here is the corrected code:

```
from typing import List

def filter_integers() -> List[int]:
    while True:
        values = input("Enter a list of values (separated by commas): ")
        if not values.strip():
            print("Invalid input. Please enter numbers separated by commas.")
            continue
        num_list = [int(x) for x in values.split(",") if x.strip().replace(",", "").isdigit()]
        if all(isinstance(i, int) for i in num_list):
            return num_list
        print("Invalid input. Please enter numbers separated by commas.")