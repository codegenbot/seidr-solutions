```Python
from typing import List

def filter_integers() -> List[int]:
    values = []
    while True:
        value = input("Enter an integer (or 'stop' to finish): ")
        if value.lower() == 'stop':
            break
        try:
            int_value = int(value)
            values.append(int_value)
        except ValueError:
            print("Invalid input. Please enter a valid integer.")
    return values