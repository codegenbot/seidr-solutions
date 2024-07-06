```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
        elif char == ')':
            group = ''
            while stack:
                group += ```+stack.pop()+```
            groups.append(group + ```)``)