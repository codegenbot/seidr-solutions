```python
from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if result and not result.endswith(' '):
            result += ' '
        result += string
    return result```