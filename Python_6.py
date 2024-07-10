from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    i = 0
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(i)
        elif char == ')':
            start = stack.pop()
            result.append(paren_string[start+1:i].count(')'))
        i += 1
    return result