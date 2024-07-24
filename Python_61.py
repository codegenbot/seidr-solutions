I fixed the code for you:

```
def correct_bracketing(brackets: str):
    if not brackets:
        return True
    stack = []
    for bracket in brackets:
        if bracket == "(":
            stack.append(bracket)
        elif bracket == ")":
            if len(stack) == 0:
                return False
            stack.pop()
    return len(stack) == 0