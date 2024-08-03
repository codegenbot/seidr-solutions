Here is the corrected code:

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
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if stack:
                stack.pop()
            if stack:
                groups.append(current_group)
                current_group = ''
            else:
                current_group += char

    if stack:
        for _ in range(len(stack)):
            current_group += stack.pop()
        groups.append(current_group)

    return groups