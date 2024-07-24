def is_nested(string):
    stack = []
    for bracket in string:
        if bracket == '[':
            stack.append(bracket)
        elif bracket == ']' and stack:
            stack.pop()
    return len(stack) < len(string) / 2 and len(stack) > 0