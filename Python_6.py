```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = 0
    for char in paren_string:
        if char == '(':
            stack += 1
        elif char == ')':
            result.append(stack)
            stack -= 1
    return result