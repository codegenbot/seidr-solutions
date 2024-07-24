```
def match_parens(s):
    stack = []
    for char in s:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if len(stack) > 0 and stack[-1] == "(":
                stack.pop()
            else:
                return "No"
    if not stack:
        return "Yes"
    else:
        return "No"

def check():
    while True:
        s = input("Enter a string of parentheses (or type 'q' to quit): ")
        if s.lower() == "q":
            break
        elif not s.isalpha():
            print(match_parens(s))
        else:
            print("Invalid input. Please enter a string or type 'q' to quit.")