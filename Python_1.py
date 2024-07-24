Here is the solution:

```
from typing import List
import re

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    while len(paren_string) > 0:
        match = re.match(r'\(([^()]+)\)', paren_string)
        if match:
            result.append(match.group(1))
            paren_string = paren_string[match.end():]
        else:
            break
    return result