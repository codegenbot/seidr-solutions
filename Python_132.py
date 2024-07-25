def is_nested(string):
    stack = []
    for char in string:
        if char == "[":
            stack.append(char)
        elif char == "]":
            if stack and stack[-1] == "[":
                stack.pop()
            else:
                return False
    return len(stack) == 0