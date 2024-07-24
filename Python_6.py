```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(1)
        elif char == ')':
            if stack:
                stack.pop()
            else:
                result.append(0)
        elif stack:
            stack.append(1)
    return [i + 1 for i, x in enumerate(stack) if x]