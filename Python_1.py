def separate_paren_groups(s):
    result = []
    count = 0
    group = ""
    
    for char in s:
        if char == '(':
            count += 1
        if count > 0:
            group += char
        if char == ')':
            count -= 1
            if count == 0:
                result.append(group)
                group = ""
    
    return result

print(separate_paren_groups("( ) (( )) (( )( ))"))