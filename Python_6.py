def parse_nested_parens(paren_string):
    stack = []
    result = []
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            level = 0
            while len(stack) > 0 and stack[-1] != ")":
                level += 1
                stack.pop()
            result.append(level)
    return result