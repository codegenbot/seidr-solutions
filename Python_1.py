from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ''
    for char in paren_string + ')':  
        if char == ' ':
            continue
        if char == '(':
            group += char
        elif char == ')':
            if len(group) > 0 and group[0] == '(':
                group += char
                result.append(group)
                group = ''
            else:
                group += char
    return result