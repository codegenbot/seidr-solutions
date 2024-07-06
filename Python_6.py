```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = 0
        max_depth = 0
        for char in group:
            if char == '(':
                stack += 1
                max_depth = max(max_depth, stack)
            elif char == ')':
                stack -= 1
        result.append(max_depth)
    return result