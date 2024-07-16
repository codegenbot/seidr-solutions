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
            if len(stack) == 0 and current_group:
                groups.append(''.join(current_group) + char)
                current_group = []
        elif len(stack) > 0:
            current_group.append(char)

    return groups