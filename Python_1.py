import sys
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    level = 0
    current_group = ""

    for char in paren_string:
        if char == "(":
            level += 1
            current_group += char
        elif char == ")":
            level -= 1
            if level == 0:
                result.append(current_group + char)
                current_group = ""
            else:
                current_group += char

    return result

input_text = sys.stdin.read().strip()
if set(input_text) == set("()"):
    output = separate_paren_groups(input_text)
    print(output)