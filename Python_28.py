```
from typing import List


def concatenate() -> str:
    user_input = input("Please enter multiple strings (separated by space or comma): ")
    try:
        input_list = [s.strip() for s in user_input.split(",")]
    except ValueError:
        return ""
    result = ""
    for s in input_list:
        result += s
    return result