from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 1 if paren_string[0] == '(' else 0
    deepest = level
    group_depths = [deepest]
    for char in paren_string[1:]:
        if char == '(' and level > 0:
            continue
        elif char == '(':
            level += 1
            deepest = level
            group_depths.append(deepest)
        elif char == ')':
            level -= 1
        if level == 0:
            result.append(deepest)
            deepest = 0
    return result