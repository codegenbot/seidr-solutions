from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ''

    for paren in paren_string:
        if paren == ' ':
            continue
        if paren == '(':
            stack.append(paren)
            current_group += paren
        elif paren == ')':
            if stack and stack[-1] == '(':
                stack.pop()
                current_group += paren
                groups.append(current_group)
                current_group = ''
    return groups