def separate_paren_groups(expression):
    result = []
    temp_group = ""
    in_group = False
    
    for char in expression:
        if char == '(':
            if not in_group:
                result.append("(")
                temp_group += "("
                in_group = True
            else:
                temp_group += char
        elif char == ')':
            if in_group:
                temp_group += char
                if temp_group.count("(") == temp_group.count(")"):
                    result.append(temp_group + ")")
                    temp_group = ""
                    in_group = False
            else:
                result.append(")")
        else:
            if in_group:
                temp_group += char
            else:
                result.append(char)
    
    return [x for x in result if x]