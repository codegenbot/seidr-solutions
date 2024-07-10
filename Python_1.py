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
                if temp_group.count("(") == temp_group.count(")"):
                    result.append(temp_group[:-1])  # remove the last parenthesis
                    in_group = False
                    temp_group = ""
            else:
                result.append(")")
                in_group = False

    if temp_group:  # check for any remaining group
        result.append(temp_group)

    return [x for x in result if x]