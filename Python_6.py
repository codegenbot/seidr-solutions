paren_strings = input().strip()

def parse_nested_parens(paren_strings):
    stack = []
    for char in paren_strings:
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