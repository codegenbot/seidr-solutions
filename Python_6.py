from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    max_nesting = -1

    for char in paren_string:
        if char == "(":
            stack.append(char)
            max_nesting = max(max_nesting, len(stack))
        elif char == ")":
            if stack:
                stack.pop()
            else:
                result.clear()

    return [max_nesting + 1] if not stack else []