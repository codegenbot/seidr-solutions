def correct_bracketing(brackets: str):
    stack = []
    for bracket in brackets:
        if bracket == "<":
            stack.append("<")
        elif bracket == ">":
            if not stack or stack.pop() != "<":
                return False
    return not stack