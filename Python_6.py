```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    max_level = 0
    for char in paren_string:
        if char == '(':
            stack.append(1)
            if len(stack) > max_level:
                max_level = len(stack)
        elif char == ')':
            stack.pop()
            if not stack:
                result.append(max_level)
                break
    return [max_level]