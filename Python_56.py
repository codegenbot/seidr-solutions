def is_valid_expression(expression):
    stack = []
    for char in expression:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if len(stack) == 0:
                return False
            stack.pop()
    return len(stack) == 0


def check(correct_bracketing=None):
    while True:
        expression = input("Enter an expression (or 'done' if finished): ")
        if expression.lower() == "done":
            break
        try:
            if correct_bracketing is None or is_valid_expression(expression):
                print("Correct bracketing!")
            else:
                print("Incorrect bracketing. Try again.")
        except ValueError:
            print("Invalid input. Please enter a valid mathematical expression.")


check()