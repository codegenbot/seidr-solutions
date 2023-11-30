from typing import List

def parse_nested_parens(paren_strings: List[str]) -> List[int]:
    result = []
    for paren_string in paren_strings:
        if not paren_string:
            result.append(-1)
            continue

        stack = []
        max_depth = 0
        current_depth = 0
        for char in paren_string:
            if char == '(':
                stack.append(char)
                current_depth += 1
                max_depth = max(max_depth, current_depth)
            elif char == ')':
                if stack:
                    stack.pop()
                    current_depth -= 1

        while stack:
            stack.pop()
            current_depth -= 1

        if current_depth != 0:
            result.append(-1)
        else:
            result.append(max_depth)
    return result