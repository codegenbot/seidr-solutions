def is_nested(string):
    stack = []
    nested = False
    for char in string:
        if char == '[':
            stack.append(char)
        elif char == ']':
            if stack:
                stack.pop()
                if stack:
                    nested = True
            else:
                return False
    return nested and not stack