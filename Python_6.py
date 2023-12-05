```
def parse_nested_parens(paren_string: str) -> list[int]:
    result = []
    stack = []
    for group in paren_string.split():
        level = 0
        for char in group:
            if char == '(':
                level += 1
                stack.append(level)
            elif char == ')':
                level -= 1
                result.append(stack.pop())
    return result
```