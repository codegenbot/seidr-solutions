import re

paren_string = input("Enter a string of parentheses: ").strip()
if not re.match(r'^[\(\)]*$', paren_string):
    print("Invalid input. Please only enter parentheses.")
    exit()

def check_parentheses(paren_string):
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if not stack:
                return False
            stack.pop()
    return len(stack) == 0

result = check_parentheses(paren_string)
print(result)