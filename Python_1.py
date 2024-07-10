```
def separate_paren_groups(expression):
    result = []
    temp_group = ""
    in_group = False

    for char in expression:
        if char == "(":
            if not in_group:
                result.append("(")
                in_group = True
            else:
                temp_group += char
        elif char == ")":
            if in_group:
                temp_group += char
                if temp_group.count("(") == 1 and temp_group.count(")") > 0:
                    result[-1] = temp_group
                    in_group = False
                    temp_group = ""
                else:
                    temp_group = ""
            else:
                result.append(")")
                in_group = False
        else:
            if in_group:
                temp_group += char
            else:
                result.append(char)

    if in_group:
        result.append(temp_group + ")")
    return [x for x in result if x]