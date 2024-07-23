```
```python
from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if not string.isalpha():
            continue
        result += string + " "
    return result.strip()
```