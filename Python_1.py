Here is the completed Python function:

```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    group = ''
    for char in paren_string:
        if char == '(': 
            group += char
        elif char == ')':
            if group.endswith(')'):
                groups.append(group)
                group = ''
            else:
                i = 0
                while i < len(group):
                    if group[i] == '(':
                        j = i
                        count = 1
                        while i < len(group) and group[i] != ')':
                            i += 1
                        while i > j and group[j] == '(':
                            j -= 1
                            count -= 1
                        if count == 0:
                            groups.append(group[:j+1])
                            group = group[i:]
                            break
                    i += 1
    if group:
        groups.append(group)
    return groups