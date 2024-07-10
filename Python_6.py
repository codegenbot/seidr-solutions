```python
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    group_depths = [0]
    for char in paren_string:
        if char == '(':
            group_depths.append(group_depths[-1] + 1)
        elif char == ')':
            group_depths.pop()
    return group_depths