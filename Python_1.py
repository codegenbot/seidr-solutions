def separate_paren_groups(expression):
    result = []
    temp_group = ""
    in_group = False
    unmatched_open = 0

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
                    result.append(temp_group)
                    in_group = False
                    temp_group = ""
            else:
                unmatched_open += 1

    while unmatched_open > 0 or temp_group.count("(") > temp_group.count(")"):
        if expression[expression.index("(")] == "(":
            unmatched_open -= 1
        elif expression[expression.index(")") - 1] == "(":
            temp_group += ")"
            temp_group = temp_group[2:]
        result.append(temp_group)
        if unmatched_open <= 0 and temp_group.count("(") == temp_group.count(")"):
            break
        temp_group = ""

    return [x for x in result if x]