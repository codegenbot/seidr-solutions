```
def match_parens(s):
    stack = []
    for char in s:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if len(stack) > 0 and stack[-1] == '(':
                stack.pop()
            else:
                return False
    if len(stack) > 0:
        return False
    return True

s = input("Enter a string: ")
print(match_parens(s))