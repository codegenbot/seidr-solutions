```python
def separate_paren_groups(paren_string: str) -> list[str]:
    stack = []
    groups = []
    for char in paren_string:
        if char == '(':
            stack.append([])
        elif char == ')':
            if len(stack) == 0:
                continue
            group = stack.pop()
            groups.append(''.join(group))
        else:
            if len(stack) > 0:
                stack[-1].append(char)
    return groups
```