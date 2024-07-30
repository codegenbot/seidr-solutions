def separate_paren_groups(s):
    result = []
    current_group = ""

    stack = []
    for char in s:
        if char == '(':
            stack.append(current_group)
            current_group = ""
        elif char == ')':
            current_group = stack.pop() + '(' + current_group + ')'
        else:
            current_group += char

    result.append(current_group)

    return result