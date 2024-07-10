Here is the modified code:

```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    curr_group = ''
    open_count = 0
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            open_count += 1
            curr_group += char
        elif char == ')':
            open_count -= 1
            curr_group += char
            if open_count == 0:
                groups.append(curr_group)
                curr_group = ''
    return groups