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
    s = '''Enter a string of parentheses: '''
    print(s)
    p = input(s)
    print(match_parens(p))

check()