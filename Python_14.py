```python
from typing import List

def all_prefixes(s: str):
    return [s[:i] for i in range(1, len(s) + 1)]

print(all_prefixes(input("Please enter a string: ")))