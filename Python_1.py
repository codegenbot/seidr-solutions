from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = ' '.join(paren_string.split())
    result = []
    temp = ''
    
    for char in paren_string:
        if char == ' ':
            if temp:
                result.append(temp)
                temp = ''
        elif char in ['(', ')']:
            if char == '(':
                temp += char
            elif temp and (temp[-1] != '(' or temp[-1] != ')'):
                result.append(temp)
                temp = ''
            else:
                temp += char
                
        else:
            if temp:
                result.append(temp)
                temp = ''

    if temp:
        result.append(temp)

    return result