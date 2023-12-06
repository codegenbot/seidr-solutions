```
def is_nested(strings: List[str]):
    stack = []
    for string in strings:
        for char in string:
            if char == '[':
                stack.append(char)
            elif char == ']':
                if len(stack) == 0:
                    return False
                stack.pop()
    return len(stack) == 0
```