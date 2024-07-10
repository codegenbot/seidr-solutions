from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for i, char in enumerate(paren_string):
        if char == '(':
            stack.append(i)
        elif char == ')':
            stack.pop()
            if not stack:
                result.append(i - len(stack) * 2 + 1)
    return result