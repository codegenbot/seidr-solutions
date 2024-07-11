from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ''
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            temp += '('
        elif char == ')':
            temp += ')'
            if temp.count('(') == temp.count(')'):
                result.append(temp)
                temp = ''
    return result