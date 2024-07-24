```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(0)
        elif char == ')':
            stack.pop()
            result.append(len(stack))
    return result