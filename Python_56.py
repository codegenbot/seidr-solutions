def correct_bracketing(brackets: str):
    stack = []
    for bracket in brackets:
        if bracket == "<":
            stack.append("<")
        elif bracket == ">":
            if len(stack) == 0:
                return False
            while stack and stack.pop() != "<":
                pass
    return len(stack) == 0