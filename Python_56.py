```
def check_brackets():
    expression = input("Enter an expression: ")
    if check_brackets(expression):
        print("Correct Braketting")
    else:
        print("Incorrect Braketting")

def check_brackets(expression):
    stack = []
    for char in expression:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if len(stack) > 0 and stack[-1] == '(':
                stack.pop()
            else:
                return False
    return len(stack) == 0

check_brackets()