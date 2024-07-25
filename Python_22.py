```
from typing import List, Any

def filter_integers():
    values = []
    while True:
        try:
            value = input("Enter an integer (or 'done' if finished): ")
            if value == 'done':
                break
            values.append(int(value))
        except ValueError:
            pass
    return [value for value in values if isinstance(value, int)]