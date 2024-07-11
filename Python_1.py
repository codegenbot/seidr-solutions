```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    for char in paren_string:
        if char == '(': 
            if not stack:  # new group starts
                group = '('
                stack.append('(')
            else: 
                group += '('
        elif char == ')':
            stack.pop()
            if not stack:  # group ends, add to result
                groups.append(group + ')')
    return groups