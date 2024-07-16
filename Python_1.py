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

paren_string = input().strip()
if all(c in "()" for c in paren_string):
    output = separate_paren_groups(paren_string)
    print(output)