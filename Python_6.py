```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        stack = []
        max_depth = 0
        for char in s:
            if char == '(':
                stack.append(1)
                max_depth = max(max_depth, len(stack))
            elif char == ')':
                stack.pop()
        result.append(max_depth)
    return result