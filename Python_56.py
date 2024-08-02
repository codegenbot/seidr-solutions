```
def correct_bracketing(brackets: str):
    stack = []
    for bracket in brackets:
        if bracket == "<":
            stack.append("<")
        elif bracket == ">":
            if len(stack) < 1:
                return False
            stack.pop()
    return len(stack) == 0