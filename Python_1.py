from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    group = ''
    
    for c in paren_string:
        if c == ' ':
            continue
        elif c == '(':
            stack.append(c)
            group += c
        elif c == ')':
            while len(stack) > 0 and stack[-1] != '(':
                stack.pop()
            if len(stack) > 0 and stack[-1] == '(':
                stack.pop()
                group += c
            else:
                result.append(group)
                group = ''
    
    if len(stack) > 0:
        for _ in range(len(stack)):
            group += ')'
        result.append(group)
    else:
        result.append(group)
    
    return [group[i: j] for i, j in [(i+1, j) for i,j in [(i+1, i+2) for i,(g,c) in enumerate(result) if c == '(')]]