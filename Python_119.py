```
def match_parens(p):
    stack = []
    for char in p:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if len(stack) > 0 and stack[-1] == "(":
                stack.pop()
            else:
                return False
    return len(stack) == 0

def check():
    while True:
        s = input("Enter a string of parentheses (or type 'q' to quit): ")
        if s.lower() == "q":
            break
        elif not any(not c.isalnum() for c in s):
            print(match_parens(s))
        else:
            print("Invalid input. Please enter a string or type 'q' to quit.")