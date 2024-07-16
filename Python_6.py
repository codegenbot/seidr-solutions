```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = []
        depth = 0
        for char in group:
            if char == '(':
                stack.append(char)
                depth += 1
            elif char == ')':
                stack.pop()
                depth -= 1
        result.append(depth)
    return result