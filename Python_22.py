```
from typing import List

def filter_integers() -> List[int]:
    values = []
    while True:
        value = input("Enter an integer (or 'stop' to finish): ")
        if value.lower() == 'stop':
            break
        if not value.strip():
            print("Invalid input. Please enter a valid integer.")
            continue
        try:
            values.append(int(value))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")