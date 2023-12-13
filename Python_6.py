```python
from typing import List

def parse_nested_parens(paren_list: List[str]) -> List[int]:
    paren_string = ''.join(paren_list)
    return [abs(paren_string.count('(') - paren_string.count(')')) for paren in paren_list]
```