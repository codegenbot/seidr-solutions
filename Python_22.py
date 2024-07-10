```
from typing import List

def filter_integers() -> List[int]:
    values = []
    while True:
        value = input("Enter an integer (or 'stop' to finish): ")
        if value.lower() == 'stop':
            break
        if not value.replace('-', '',).replace('+', '').replace('e', '').isdigit():
            print("Invalid input. Please enter a valid integer.")
        else:
            values.append(int(value))
    return values