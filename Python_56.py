def correct_bracketing(expression):
    if isinstance(expression, str):
        stack = []
        for char in expression:
            if char == "(":
                stack.append(char)
            elif char == ")":
                if len(stack) == 0:
                    return False
                else:
                    stack.pop()
        if len(stack) > 0:
            return False
    return True


def check():
    while True:
        try:
            expression = input("Enter an expression (or 'done' if finished): ")
            if expression.lower() == "done":
                break
            print(
                "Correct bracketing!"
                if correct_bracketing(expression)
                else "Incorrect bracketing. Try again."
            )
        except Exception as e:
            print(f"Error occurred: {e}")


check()