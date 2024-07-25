```
from typing import List

def filter_integers():
    values = []
    while True:
        try:
            value = int(input("Enter an integer (or 'done' if finished): "))
            values.append(value)
        except ValueError:
            if input("Enter 'done' if you want to finish: ") == 'done':
                break
    return [value for value in values]