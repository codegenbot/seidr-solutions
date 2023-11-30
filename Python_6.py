from typing import List

def parse_nested_parens(paren_string: str)->List[int]:
    result = []
    for group in paren_string.split('|'):
        stack = []
        max_depth = 0
        current_depth = 0
        for char in group:
            if char == '(':
                stack.append(char)
                current_depth += 1
                max_depth = max(max_depth, current_depth)
            elif char == ')':
                if stack:
                    stack.pop()
                    current_depth -= 1
        if stack:
            result.append(-1)
        else:
            result.append(max_depth)
    return result