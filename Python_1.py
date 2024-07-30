parens = input("Enter parentheses: ")
result = separate_paren_groups(parens)

def separate_paren_groups(parens):
    stack = []
    groups = []
    
    for char in parens:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if stack:
                stack.pop()
            else:
                groups.append(")".join(stack))
                stack = []
    
    groups.extend(stack)
    return groups