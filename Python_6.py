```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    max_depth = 0
    for char in paren_string:
        if char == '(':
            stack.append(char)
            max_depth += 1
        elif char == ')':
            stack.pop()
            max_depth -= 1
        else:
            result.append(max_depth)
            max_depth = 0
    return result