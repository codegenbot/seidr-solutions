```
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp_str = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            temp_str += char
        elif char == ")":
            while stack and stack[-1] != "(":
                temp_str += stack.pop()
            if stack:
                temp_str += stack.pop()

    # Process any remaining characters in the stack
    while stack:
        temp_str += stack.pop()

    result = [s.strip() for s in (temp_str + "").split("(")]
    return result