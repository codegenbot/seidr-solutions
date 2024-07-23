```python
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append(1)
        elif char == ")":
            while len(stack) > 0 and stack.pop() != 1:
                pass
            stack.append(0)
        else:
            pass
    return [i for i in stack if i == 1]