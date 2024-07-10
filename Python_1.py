def separate_paren_groups(expression):
    result = []
    temp_group = ""
    
    in_group = False
    
    for char in expression:
        if char == '(':
            in_group = True
            temp_group += char
        elif char == ')':
            in_group = False
            temp_group += char
            result.append(temp_group)
            temp_group = ""
        else:
            if not in_group:
                result.append(char)
            else:
                temp_group += char
    
    return result