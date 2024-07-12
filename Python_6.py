```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = []
        max_depth = 0
        for char in group:
            if char == '(':
                stack.append(char)
                max_depth += 1
            elif char == ')':
                stack.pop()
                max_depth -= 1
        result.append(max_depth)
    return result