from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    level = 0

    for char in paren_string:
        if char == '(':
            level += 1
        elif char == ')':
            level -= 1
            if level < 0:
                level = 0

        if level == 1:
            result.append("")
            if result:
                result[-1] += char

    return result