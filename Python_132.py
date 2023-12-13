def is_nested(string):
    stack = []
    for bracket in string:
        if bracket == '[':
            stack.append(bracket)
        elif bracket == ']':
            if len(stack) > 0:
                stack.pop()
            else:
                return True
    return False