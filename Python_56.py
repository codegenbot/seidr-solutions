```
def correct_bracketing(brackets: str):
    stack = []
    for bracket in brackets:
        if bracket == "<":
            stack.append(bracket)
        elif bracket == ">":
            if len(stack) == 0:
                return False
            else:
                while stack and stack[-1] != "<":
                    stack.pop()
                if not stack:
                    return True
                stack.pop()
    return len(stack) == 0