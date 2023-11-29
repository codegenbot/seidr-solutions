def parse_nested_parens(paren_string):
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if not stack or stack[-1] != '(':
                return False
            stack.pop()
    return not stack

paren_string = input()
print(parse_nested_parens(paren_string))