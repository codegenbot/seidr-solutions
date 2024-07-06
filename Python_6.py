```
def parse_nested_parens(s):
    stack = []
    output = ''
    for char in s:
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack.pop() != '(':
                pass
            if not stack:
                return 'Invalid nested parentheses'
        else:
            output += char
    if stack:
        return 'Invalid nested parentheses'
    return output

print(parse_nested_parens("""{}""".format(input().strip())))