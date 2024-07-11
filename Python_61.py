def correct_bracketing(brackets: str):
    stack = []
    for bracket in brackets:
        if bracket == "(":
            stack.append(bracket)
        elif bracket == ")":
            if len(stack) > 0 and stack.pop() == "(":
                continue
            else:
                return False
    return len(stack) == 0