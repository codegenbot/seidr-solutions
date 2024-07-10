from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    open_levels = 0
    deepest_open = 0
    deepest_close = 0
    for char in paren_string:
        if char == '(':
            open_levels += 1
            if open_levels > deepest_open:
                deepest_open = open_levels
        elif char == ')':
            open_levels -= 1
            if open_levels < deepest_close:
                deepest_close = open_levels
    result.append(deepest_open)
    return result