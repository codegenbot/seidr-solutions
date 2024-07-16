Here is the completed code:

```
from typing import List
import re

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    start = 0
    for end in range(len(paren_string)):
        if paren_string[end] == '(':
            start = end
        elif paren_string[end] == ')':
            group = paren_string[start:end+1]
            groups.append(group)
            break
    return groups