```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ''

    for paren in paren_string:
        if paren == ' ':
            continue
        if paren == '(':
            stack.append(paren)
            group += paren
        elif paren == ')':
            stack.pop()
            group += paren
            if not stack:
                groups.append(group)

    return groups