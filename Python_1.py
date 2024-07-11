```
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    def check(group: str):
        count = 0
        for char in group:
            if char == '(':
                count += 1
            elif char == ')':
                count -= 1
            if count < 0:
                return False
        return count == 0

    groups = []
    current_group = ''
    for char in paren_string:
        if char in '()' and current_group != '':
            if check(current_group):
                groups.append(current_group)
            current_group = ''
        elif char in '()':
            if char == '(':
                current_group += '('
            else:
                current_group += ')'
        else:
            current_group += char
    if check(current_group):
        groups.append(current_group)
    return groups