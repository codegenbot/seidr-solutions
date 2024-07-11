Here is the solution:

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ''

    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            current_group += char
        elif char == ')':
            if not stack or stack.pop() != '(':
                return []  # invalid group
            current_group += char
            while stack and stack[-1] == '(':
                stack.pop()
            if stack:
                groups.append(current_group)
                current_group = ''
    if stack:
        return []  # unbalanced parentheses
    if current_group:
        groups.append(current_group)

    return [group for group in groups if group]