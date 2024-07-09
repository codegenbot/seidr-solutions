Here is the corrected code:

```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    temp_level = 0
    for char in paren_string:
        if char == '(':
            temp_level += 1
        elif char == ')':
            temp_level -= 1
        else:
            result.append(level)
            level = temp_level
    result.append(level)
    return result