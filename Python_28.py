```Python
from typing import List

def concatenate() -> str:
    input_strings = input("Enter a list of strings (separated by space): ").split()
    return "".join([s.strip() for s in input_strings]).strip()

print(concatenate())