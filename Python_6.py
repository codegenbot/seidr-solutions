from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    levels = []
    current_level = 0
    max_level = 0

    for char in paren_string:
        if char == '(':
            current_level += 1
            max_level = max(max_level, current_level)
        elif char == ')':
            current_level -= 1

        if char == ' ':
            levels.append(max_level)
            max_level = 0

    return levels