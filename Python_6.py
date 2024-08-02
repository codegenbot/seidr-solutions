from typing import List

stack = []
result = []


def parse_nested_parens(paren_string: str) -> List[int]:
    for char in paren_string:
        if char == "(":
            stack.append(1)
            result.append(max(result + [len(stack)]))
        elif char == ")":
            stack.pop()
    return result