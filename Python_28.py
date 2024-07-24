```
from typing import List


def concatenate(strings: List[str]) -> str:
    while True:
        user_input = input("Please enter a string (or 'quit' to stop): ")
        if user_input.lower() == 'quit':
            break
        strings.append(user_input)

    return "".join(strings)