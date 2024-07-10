```python
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    levels = 0
    for char in paren_string:
        if char == '(':
            stack.append(char)
            levels += 1
        elif char == ')':
            if stack:
                stack.pop()
                levels -= 1
        else:
            if stack:
                result.append(levels)
                stack = []
                levels = 0
    return [levels] if stack else result