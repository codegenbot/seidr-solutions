def separate_paren_groups(paren_string):
    stack = []
    groups = []
    current_group = []

    for char in paren_string:
        if char == '(':
            if stack:
                current_group.append(char)
            stack.append('(')
        elif char == ')':
            stack.pop()
            current_group.append(char)
            if not stack:
                groups.append(''.join(current_group))
                current_group = []
        elif stack:
            current_group.append(char)

    return groups