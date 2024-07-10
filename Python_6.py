from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    deepest = 0
    inside = False
    for char in paren_string:
        if char == "(" and not inside:
            level += 1
            if level == 1:
                inside = True
            deepest = max(deepest, level)
        elif char == ")":
            level -= 1
            if level == 0:
                inside = False
    result.append(deepest)
    return [result]