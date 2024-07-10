from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(int)
        elif char == ')':
            stack.pop()
    return [len(list(stack))]