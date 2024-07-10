def correct_bracketing(brackets: str):
    stack = []
    for bracket in brackets:
        if bracket == "<":
            stack.append("<")
        elif bracket == ">":
            if len(stack) == 0:
                return False
            if stack.pop() != "<":
                return False
    return len(stack) == 0