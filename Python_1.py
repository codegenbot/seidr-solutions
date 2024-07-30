parens = input().strip()

def separate_paren_groups(parens):
    stack = []
    result = []
    
    for char in parens:
        if char == '(':
            stack.append('(')
        elif char == ')':
            if stack:
                stack.pop()
            else:
                result.append(')')
    
    result = result + stack
    
    return ''.join(result)

result = separate_paren_groups(parens)
print(result)