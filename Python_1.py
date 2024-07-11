Here is the solution:

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                groups.append(')')
                stack.pop()
            if stack:
                stack.pop()
            else:
                raise ValueError("Unbalanced parentheses")
    
    for _ in range(len(stack)):
        groups.append('(')
        groups.append(')')
        stack.pop()
    
    result = [''.join(group) for group in (groups[i:i+2] for i in range(0, len(groups), 2))]
    return result