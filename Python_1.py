def separate_paren_groups(input_str):
    stack = []
    result = []
    for char in input_str:
        if char == '(':
            stack.append('(')
        elif char == ')' and stack:
            stack.pop()
            if not stack:
                result.append(''.join(stack))
        else:
            stack = []
    return result