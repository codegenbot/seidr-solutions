def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []

    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append('(')
            result.append('(')
        elif char == ')':
            if stack and stack[-1] == '(':
                stack.pop()
                result.append(')')
        
        if not stack:
            temp = ''.join(result).strip('()')
            if temp:  
                result = [temp]
            else:
                result = []
    
    return list(map(str, filter(None, result)))