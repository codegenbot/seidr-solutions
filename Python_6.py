from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    group = ''
    depth = 0
    max_depth = 0
    for char in paren_string:
        if char == '(':
            depth += 1
            max_depth = max(max_depth, depth)
            group += char
        elif char == ')':
            depth -= 1
            group += char
        else:
            if depth > 0:
                group += char
            else:
                break
    result.append(max_depth)
    return result