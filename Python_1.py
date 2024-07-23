```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    i = 0
    while i < len(paren_string):
        count = 0
        temp = ''
        for j in range(i, len(paren_string)):
            if paren_string[j] == '(':
                count += 1
                temp += '('
            elif paren_string[j] == ')':
                count -= 1
                temp += ')'
            if count == 0:
                result.append(temp)
                i = j + 1
                break
    return result