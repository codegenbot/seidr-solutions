```
from typing import List


def concatenate(strings: List[str]) -> str:
    input_list = []
    while True:
        user_input = input("Enter a string (or 'done' to finish): ")
        if user_input.lower() == 'done':
            break
        input_list.append(user_input)
    if not input_list:
        return "No strings entered."
    return "".join(input_list)