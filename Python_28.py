```
from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = input("Enter strings (separated by space): ")
while True:
    try:
        strings = [s.strip() for s in strings.split()]
        break
    except ValueError:
        print("Invalid input. Please enter strings separated by spaces.")
print(concatenate(strings))