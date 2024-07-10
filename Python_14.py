Here is the modified code:

```python
from typing import List

def all_prefixes(string: str) -> List[str]:
    result = [""]
    for char in string:
        new_result = []
        for prefix in result:
            new_result.append(prefix + char)
        result += new_result
    return result