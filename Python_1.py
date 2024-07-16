from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ''
    for char in paren_string:
        if char != ' ' and (temp == '' or temp[-1] + char in ['()', '[]', '{}'']):
            temp += char
        else:
            result.append(temp)
            temp = ''
    result.append(temp)
    return result