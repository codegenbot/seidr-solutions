
def correct_bracketing(brackets: str):
    stack = []
    for bracket in brackets:
        if bracket == "(":
            stack.append(bracket)
        else:
            if len(stack) == 0:
                return False
            stack.pop()
    return len(stack) == 0