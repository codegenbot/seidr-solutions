def separate_paren_groups(expression):
    result = ""
    temp_group = ""
    
    for char in expression:
        if char == '(':
            if temp_group != "":
                result += temp_group + ")\n("
                temp_group = ""
        elif char == ')':
            if temp_group != "":
                result += temp_group
                temp_group = ""
            else:
                result += "\n"
        else:
            temp_group += char
    
    if temp_group != "":
        result += temp_group
    
    return result