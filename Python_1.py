from typing import List

def separate_paren_groups() -> List[str]:
    paren_string = input()

    if paren_string[0] != "(" or paren_string[-1] != ")":
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

        if open_brackets_count == 0 and current_group:
            result.append(current_group)
            current_group = ""

    return result