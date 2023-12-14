```python
from typing import List, Tuple

def parse_nested_parens(paren_strings: List[str]) -> List[int]:
    result = []
    for paren_string in paren_strings:
        result.append(abs(paren_string.count('(') - paren_string.count(')')))
    return result

n = int(input())
paren_strings = []
for _ in range(n):
    paren_strings.append(input())
result = parse_nested_parens(paren_strings)
print(result)
```