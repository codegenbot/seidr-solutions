I removed the blank lines from the given code to resolve the issue:

```python
from typing import list

def filter_by_prefix(strings: list, prefix: str) -> list:
    return [s for s in strings if s.startswith(prefix)]