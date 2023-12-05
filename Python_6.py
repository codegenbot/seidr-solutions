def parse_nested_parens(paren_string):
    result = []
    level = 0
    stack = []
    for group in paren_string.split():
        for char in group:
            if char == '(':
                level += 1
                stack.append(char)
            elif char == ')':
                level -= 1
                if len(stack) > 0 and stack[-1] == '(':
                    result.append(level + 1)
                    stack.pop()
    return result