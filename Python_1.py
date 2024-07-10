```
def separate_paren_groups(expression):
    result = []
    temp_group = ""
    
    for char in expression:
        if char == '(':
            if temp_group != "":
                result.append(temp_group + ")")
                temp_group = "("
            else:
                result.append("(")
        elif char == ')':
            if temp_group != "":
                temp_group += char
            else:
                result.append(")")
        else:
            temp_group += char
    
    if temp_group != "":
        result.append(temp_group + ")")

    return [x for x in result if x]