from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    count = 0
    for char in paren_string:
        if char == '(':
            count += 1
        elif char == ')':
            count -= 1
        else:
            continue
        if count == 0:
            result.append(len(result) + 1)
    return result