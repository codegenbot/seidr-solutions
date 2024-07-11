def correct_bracketing(expression):
    stack = []
    for char in expression:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if len(stack) == 0:
                return False
            else:
                stack.pop()
    if len(stack) > 0:
        return False
    return True

def check():
    while True:
        expression = input("Enter an expression (or 'done' if finished): ")
        if expression.lower() == "done":
            break
        try:
            if correct_bracketing(expression):
                print("Correct bracketing!")
            else:
                print("Incorrect bracketing. Try again.")
        except ValueError:
            print("Invalid input. Please enter a valid mathematical expression.")

check()