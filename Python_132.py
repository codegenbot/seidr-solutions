def is_nested(string):
    stack = []
    for bracket in string:
        if bracket == '[':
            stack.append(bracket)
        elif bracket == ']' and stack and stack[-1] == '[':
            stack.pop()
        else:
            return False
    return len(stack) == 0