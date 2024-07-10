def separate_paren_groups(expression):
    result = []
    temp_group = ""
    in_group = False
    unmatched_open = 0

    for char in expression:
        if char == "(":
            in_group = True
            temp_group += char
        elif char == ")":
            if in_group:
                temp_group += char
                if temp_group.count("(") == temp_group.count(")"):
                    result.append(temp_group)
                    temp_group = ""
                    in_group = False
            else:
                unmatched_open += 1

    while unmatched_open > 0:
        result.append("(" + str(unmatched_open) + ")")
        unmatched_open -= 1

    return [x for x in result if x]