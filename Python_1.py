```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    i = 0
    while i < len(paren_string):
        count = 0
        group = ''
        while i < len(paren_string):
            if paren_string[i] == '(':
                count += 1
                group += '('
            elif paren_string[i] == ')':
                count -= 1
                group += ')'
            else:
                i += 1
                break
            i += 1
        result.append(group)
    return result