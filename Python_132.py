def is_nested(string):
    stack = []
    for bracket in string:
        if bracket == '[':
            stack.append(bracket)
        elif bracket == ']' and stack:
            stack.pop()
    return len(stack) < len(string) and len(stack) > 0