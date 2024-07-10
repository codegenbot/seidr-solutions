```
def separate_paren_groups(expression):
    result = []
    temp_group = ""
    in_group = False
    
    for char in expression:
        if char == '(':
            if not in_group:
                result.append("(")
                temp_group = "("
                in_group = True
            else:
                temp_group += char
        elif char == ')':
            if in_group:
                temp_group += char
                if temp_group == ")(":
                    result[-1] = temp_group[1:-1]
                    in_group = False
                    temp_group = ""
                else:
                    temp_group = ""
            else:
                result.append(char)
        else:
            if in_group:
                temp_group += char
            else:
                result.append(char)
    
    if in_group:
        result.append(temp_group + ")")
    return [x for x in result if x]