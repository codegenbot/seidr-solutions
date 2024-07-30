def separate_paren_groups(parens):
    groups = []
    count = 0
    current_group = ""
    
    for char in parens:
        if char == '(':
            count += 1
        elif char == ')':
            count -= 1
        
        current_group += char
        
        if count == 0:
            groups.append(current_group)
            current_group = ""

    return groups

parens = input()
result = separate_paren_groups(parens)