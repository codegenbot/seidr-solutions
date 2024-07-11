from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ''

    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            group += char
        elif char == ')':
            while stack and stack[-1] != '(':
                group += stack.pop()
            if not stack:
                groups.append(group + ')')
                group = ''
            else:
                stack.pop()

    if stack:
        while stack[-1] != '(':
            group += stack.pop()
        if stack:
            stack.pop()  # Pop the remaining '('
        groups.append(group + ')')
    else:
        groups.append(group)
    return [group] + groups