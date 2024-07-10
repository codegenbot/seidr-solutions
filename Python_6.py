from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    deepest = 0
    for char in paren_string:
        if char == '(':
            level += 1
            if level > deepest:
                deepest = level
        elif char == ')':
            level -= 1
        if level == 0:
            result.append(deepest)
            deepest = 0
    return result