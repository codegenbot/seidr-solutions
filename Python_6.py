```
def parse_nested_parens(s):
    stack = []
    result = ''
    for char in s:
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack.pop() != '(':
                result += char
        else:
            while stack:
                result += stack.pop()
            result += char
    return result

print(parse_nested_parens(input().strip()))