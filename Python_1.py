```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        
        if char in ['(', ')']:
            if char == '(':
                temp += char
            elif temp and (temp[-1] != '(' or temp[-1] != ')'):
                result.append(temp)
                temp = ''
            else:
                temp += char
                
    if temp:
        if len(temp) == 2 and (temp[0] == '(' and temp[1] == ')' or temp[0] == ')' and temp[1] == '('):
            result.append(temp)
        else:
            result.append(temp)

    return result