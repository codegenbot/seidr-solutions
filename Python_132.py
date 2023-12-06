```python
def is_nested(string):
    stack = []
    for char in string:
        if char == '[':
            stack.append(char)
        elif char == ']':
            if len(stack) == 0:
                return False
            stack.pop()
    return len(stack) == 0
```
I've removed the extra backticks at the beginning and end of the code snippet, and the language name. The code should be correct now.