```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = 0
        max_level = 0
        for char in group:
            if char == '(':
                stack += 1
            elif char == ')':
                stack -= 1
            if stack > max_level:
                max_level = stack
        result.append(max_level)
    return result