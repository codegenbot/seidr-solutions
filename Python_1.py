```
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ''
    stack = []
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            group += char
        elif char == ')':
            while len(stack) > 0 and stack.pop() != '(':
                pass
            if len(stack) == 0:
                result.append(group + char)
                group = ''
            else:
                group += char
    
    return result