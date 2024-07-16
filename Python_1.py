from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if not (paren_string.startswith("(") and paren_string.endswith(")")):
        return ["Input string must start and end with parentheses."]

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

    if not result:
        return ["No valid parentheses group found in input string."]

    return result