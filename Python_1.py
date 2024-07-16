```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ''
    for char in paren_string:
        if char == ' ':
            continue
        temp += char
        if len(temp) > 1 and temp[0] == '(' and temp[-1] == ')':
            result.append(temp)
            temp = ''
    return result