```
def correct_bracketing(brackets: str):
    stack = []
    for bracket in brackets:
        if bracket == "<":
            stack.append("<")
        elif bracket == ">":
            while len(stack) > 0 and stack[-1] != "<":
                stack.pop()
            if len(stack) == 0:
                return False
            stack.pop()
    return len(stack) == 0