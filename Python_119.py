```
def match_parens(p):
    stack = []
    for char in p:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if len(stack) > 0 and stack[-1] == '(':
                stack.pop()
            else:
                return False
    return len(stack) == 0

def check():
    s = input("Enter a string of parentheses (or type 'q' to quit): ")
    while True:
        if s.lower() == 'q':
            break
        elif isinstance(int(s), int):
            print("Invalid input. Please enter a string or type 'q' to quit.")
            s = input("Enter a string of parentheses: ")
        else:
            print(match_parens(s))
            s = input("Enter a string of parentheses (or type 'q' to quit): ")

check()