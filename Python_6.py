```
def parse_nested_parens(paren_string):
    result = []
    stack = []
    level = 0
    for group in paren_string.split():
        for char in group:
            if char == '(':
                level += 1
                stack.append(level)
            elif char == ')':
                if len(stack) > 0 and stack[-1] == level:
                    result.append(level)
                    level -= 1
                else:
                    raise ValueError("Mismatched parentheses")
    return result
```