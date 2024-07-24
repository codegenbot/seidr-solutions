```python
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

def check(match_parens):
    s = input("Enter a string of parentheses: ")
    print(match_parens(s))

check(match_parens)