Here is the completed code:

```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    i = 0
    while i < len(paren_string):
        count = 0
        group_start = i
        for j in range(i, len(paren_string)):
            if paren_string[j] == '(':
                count += 1
            elif paren_string[j] == ')':
                count -= 1
            if count == 0:
                result.append(paren_string[group_start:j+1])
                i = j + 1
                break
        else:
            i = len(paren_string)
    return result