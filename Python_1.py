def separate_paren_groups(input_str):
    stack = []
    result = []
    current_group = []

    for char in input_str:
        if char == '(':
            stack.append('(')
            current_group.append(char)
        elif char == ')' and stack:
            stack.pop()
            current_group.append(char)
            if not stack:
                result.append(''.join(current_group))
                current_group = []
        else:
            stack = []
            current_group = []

    return result