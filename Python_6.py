from typing import List

stack = []


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for paren in paren_string.split():
        nesting_level = 0
        for char in paren:
            if char == "(":
                stack.append(char)
                nesting_level += 1
            elif char == ")":
                stack.pop()
                nesting_level -= 1
        result.append(nesting_level)
    return result