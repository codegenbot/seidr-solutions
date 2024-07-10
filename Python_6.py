```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    current_group = ''
    max_level = 0
    for char in paren_string:
        if char == '(':
            current_group += '('
            max_level += 1
        elif char == ')':
            current_group += ')'
            max_level -= 1
            if max_level < 0:
                result.append(-max_level)
                max_level = 0
                if not current_group:
                    continue
                result.append(int(current_group.replace('(','-').replace(')', '')))
                current_group = ''
    return result