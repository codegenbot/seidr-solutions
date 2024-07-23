```
def correct_bracketing(brackets: str):
    stack = []
    for bracket in brackets:
        if bracket == "(":
            stack.append(bracket)
        elif bracket == ")":
            if len(stack) == 0:
                return False
            stack.pop()
    return len(stack) == 0

if __name__ == "__main__":
    user_input = input("Enter the string of brackets: ")
    print(correct_bracketing(user_input))