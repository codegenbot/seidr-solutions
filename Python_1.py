from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        
        if char == '(':
            if temp and temp[-1] != '(':
                result.append(temp)
                temp = ''
            temp += char
        elif char == ')':
            if not temp or temp[-1] != '(':
                result.append(temp + ')')
                temp = ''
            else:
                temp += char
                
    if temp:
        result.append(temp)

    return result