```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = []
        level = 0
        for char in group:
            if char == '(':
                stack.append(char)
                level += 1
            elif char == ')':
                stack.pop()
                level -= 1
        result.append(level)
    return result