def separate_paren_groups(paren_string):
    groups = []
    current_group = ''
    count = 0
    
    for char in paren_string:
        if char == '(':
            count += 1
        elif char == ')':
            count -= 1
        
        current_group += char
        if count == 0:
            groups.append(current_group)
            current_group = ''
    
    return groups

paren_string = input().replace(' ', '')
print(separate_paren_groups(paren_string))