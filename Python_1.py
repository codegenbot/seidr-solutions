```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []

    for paren in paren_string:
        if paren == ' ':
            continue
        if paren in ['(', '[']:
            stack.append(paren)
        elif paren in [')', ']']:
            group = ''
            while stack and stack.pop() != '(':
                group += ')'
            stack.pop()
            groups.append(group)

    result.extend(groups)

    return result