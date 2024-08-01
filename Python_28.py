```
from typing import List


def concatenate() -> str:
    user_input = input("Enter one or more strings separated by spaces: ")
    return "".join(user_input.split())