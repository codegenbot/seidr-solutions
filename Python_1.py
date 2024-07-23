```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = ''

    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            groups += char
        elif char == ')':
            stack.pop()
            groups += char
            if not stack:
                while len(groups) > 1 and groups[-2] != '(':
                    result.append(groups[:-1])
                    groups = groups[:-1]
                result.append(groups)
                groups = ''

    return result