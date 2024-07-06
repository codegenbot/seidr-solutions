```
def parse_nested_parens(s):
    stack = []
    result = ''
    for char in s:
        if char == '(':
            stack.append(char)
            result += '('
        elif char == ')':
            if stack:
                stack.pop()
                result += ')'
            else:
                result += char
        else:
            result += char
    return result

parse_nested_parens(input().strip())