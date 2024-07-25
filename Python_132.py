Here is the corrected code:

```
def is_nested(string):
    stack = []
    for char in string:
        if char == '[':
            stack.append(char)
        elif char == ']':
            if len(stack) == 0:
                return False
            stack.pop()
        elif char == '[' and stack and stack[-1] == '[':
            while stack[-1] != ']':
                stack.append('[')
            stack.pop()
    return len(stack) > 0