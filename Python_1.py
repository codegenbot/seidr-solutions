def separate_paren_groups(paren_string):
    stack = []
    result = []
    
    if not paren_string:
        return result
    
    for char in paren_string:
        if char == '(':
            stack.append('(')
        elif char == ')':
            group = ''
            while stack and stack[-1] != '(':
                group = stack.pop() + group
            if stack:
                stack.pop()
            result.append(group)
    
    return result

paren_string = input().strip().replace(' ', '')
print(separate_paren_groups(paren_string))