```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    max_level = 0
    for char in paren_string:
        if char == '(':
            stack.append(char)
            level = len(stack)
            if level > max_level:
                max_level = level
        elif char == ')':
            stack.pop()
            level = len(stack)
            if level < max_level:
                max_level = level
    result.append(max_level)
    return result