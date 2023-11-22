from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    max_nesting = 0

    for char in paren_string:
        if char == "(":
            stack.append(char)
            max_nesting = max(max_nesting, len(stack))
        elif char == ")":
            if stack:
                stack.pop()
            else:
                return []

    if stack:
        return []

    result.append(max_nesting)
    return result