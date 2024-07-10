from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    current_group = []
    for char in paren_string:
        if char == '(':
            current_group.append(int(char))
        elif char == ')':
            if len(current_group) > 1 and current_group[-2] == '(':
                result.append(len(current_group) - 2)
            current_group = []
    return result