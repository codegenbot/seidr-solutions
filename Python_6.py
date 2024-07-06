from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append(1)
        elif char == ")":
            if stack:
                result.append(stack.pop())
            else:
                result.append(0)
        elif char == '"':
            if len(stack) > 0 and stack[-1] == "1":
                result.append(1)
            else:
                result.append(0)
    return result