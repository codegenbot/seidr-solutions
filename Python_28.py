```Python
from typing import List


def concatenate() -> str:
    user_input = input("Please enter a list of strings (separated by spaces) or an object that can be converted to string: ")
    if isinstance(user_input, list):
        return "".join(map(str, user_input))
    else:
        try:
            return str(user_input)
        except ValueError:
            return "Error: Expected a list of strings"