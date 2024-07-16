import sys
from typing import List

def separate_paren_groups() -> List[str]:
    paren_string = sys.stdin.readline().rstrip()

    if paren_string.count("(") != paren_string.count(")"):
        return []

    result = []
    current_group = ""

    open_brackets_count = 0
    for char in paren_string:
        if char == "(":
            open_brackets_count += 1
        elif char == ")":
            open_brackets_count -= 1

        current_group += char

        if open_brackets_count == 0:
            result.append(current_group)
            current_group = ""

    return result