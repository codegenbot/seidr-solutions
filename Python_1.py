```
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    group = ''
    
    for c in paren_string:
        if c == ' ':
            continue
        if c == '(':
            stack.append(c)
            group += c
        elif c == ')':
            while len(stack) > 0 and stack.pop() != '(':
                pass
            if len(stack) == 0:
                result.append(group + c)
                group = ''
    
    return result