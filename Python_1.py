def separate_paren_groups(paren_string):
    groups = []
    current_group = ''
    open_count = 0

    for char in paren_string:
        if char == '(':
            open_count += 1
        elif char == ')':
            open_count -= 1

        current_group += char

        if open_count == 0:
            groups.append(current_group)
            current_group = ''

    return groups