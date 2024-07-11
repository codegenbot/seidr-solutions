```
from typing import List


def concatenate() -> str:
    user_input = input("Please enter a list of strings (separated by spaces) or an object that can be converted to string: ")
    if isinstance(eval('[' + user_input + ']'), list):
        return "".join(map(str, eval('[' + user_input + ']')))
    else:
        try:
            return str(user_input)
        except ValueError:
            return "Error: Expected a list of strings"