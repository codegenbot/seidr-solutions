```
from typing import List

def concatenate():
    strings = []
    while True:
        try:
            s = input("Enter a string (or 'q' to quit): ")
            if s.lower() == 'q':
                break
            strings.append(s)
        except ValueError:
            print(f"Error: {s} is not a valid input.")
    return ', '.join(map(str, strings))

print(concatenate())