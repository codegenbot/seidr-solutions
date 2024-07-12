```
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            groups.append('(')
        elif char == ')':
            while len(stack) > 0 and stack[-1] != '(':
                groups.append(')')
                stack.pop()
            if len(stack) > 0:
                stack.pop()    
        
    for i in range(len(groups)):
        if i % 2 == 1:
            groups[i] = '(' + groups[i]
            groups[i-1] += ')'
    result.extend(groups)
    return result