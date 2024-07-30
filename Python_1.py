parens = input("Enter parentheses: ").strip()

def separate_paren_groups(parens):
    stack = []
    result = []
    current_group = []
    
    for char in parens:
        if char == '(':
            stack.append('(')
            if len(stack) > 1:
                current_group.append(char)
        elif char == ')':
            stack.pop()
            if len(stack) > 0:
                current_group.append(char)
            else:
                result.append(''.join(current_group))
                current_group = []
    
    return result

result = separate_paren_groups(parens)