```
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp_str = ''
    
    for c in paren_string:
        if c == '(':
            stack.append(c)
            temp_str += c
        elif c == ')':
            stack.pop()
            temp_str += c
            
            if not stack:
                result.append(temp_str + ''))
                temp_str = ''

    return result