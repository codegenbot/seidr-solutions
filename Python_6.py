```
from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    group = ''
    for char in paren_string:
        if char == '(':
            if level == 0:
                result.append([int(group)])
                group = ''
                level += 1
            else:
                level += 1
        elif char == ')':
            level -= 1
            if level == 0:
                result.append(int(group))
                group = ''
        elif level > 0:
            group += char
    return [int(group)] if level > 0 else result