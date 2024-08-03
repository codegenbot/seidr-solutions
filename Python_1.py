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
            while len(stack) > 0 and stack[-1] != '(':
                group += stack.pop()
            if len(stack) > 0 and stack[-1] == '(':
                stack.pop()
                group += char
            else:
                groups.append(group)
                group = ''
    
    if len(stack) > 0:
        for _ in range(len(stack)):
            group += stack.pop()
        groups.append(group + ')')  # add closing parenthesis
    
    return [group + ')' if i != len(groups) - 1 else group for i, group in enumerate(groups)]