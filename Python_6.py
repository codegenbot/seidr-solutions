import ast

try:
    paren_strings = ast.literal_eval(input())
except:
    print("Input Error")
    exit()

def parse_nested_parens(paren_strings):
    stack = []
    for string in paren_strings:
        for char in string:
            if char not in ['(', ')']:
                return False
            if char == '(':
                stack.append(char)
            elif char == ')':
                if not stack or stack[-1] != '(':
                    return False
                stack.pop()
        if stack:
            return False
    return True

print(parse_nested_parens(paren_strings))