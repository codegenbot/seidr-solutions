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
            while stack and stack[-1] != '(':
                group += c
                stack.pop()
            if stack:
                group += c
                stack.pop()
            result.append(group)
            group = ''
    return result