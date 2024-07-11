```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return "Please provide some strings"
    return "".join(s for s in strings)

user_input = input("Enter some strings separated by commas: ")
strings = [s.strip() for s in user_input.split(',')]
print(concatenate(strings))