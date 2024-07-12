```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ''
    for char in paren_string:
        if char == ' ':
            continue
        temp += char
        if (temp.count('(') == temp.count(')')) and len(temp) > 0:
            result.append(temp)
            temp = ''
    return result