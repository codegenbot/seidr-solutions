def separate_paren_groups(paren_string):
    stack = []
    groups = []
    current_group = []

    for char in paren_string:
        if char == '(':
            stack.append('(')
            if len(stack) > 1:
                current_group.append(char)
        elif char == ')':
            stack.pop()
            if len(stack) == 0:
                groups.append(''.join(current_group) + char)
                current_group = []
        elif stack:
            current_group.append(char)

    if current_group:
        groups.append(''.join(current_group))

    return groups