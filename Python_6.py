from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append(0)
        elif char == ")":
            level = stack.pop()
            while len(stack) > 0 and stack[-1] <= level:
                stack.pop()
            result.append(len(stack) + 1)
    return result