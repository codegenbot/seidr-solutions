def separate_paren_groups(expression):
    result = []
    temp_group = ""
    in_group = False
    unmatched_open = 0
    unmatched_close = 0

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
                unmatched_close += 1

    while len(expression) > 0 and (unmatched_open > 0 or unmatched_close > 0):
        if expression[0] == "(":
            unmatched_open -= 1
        else:
            unmatched_close -= 1
        result.append(expression.pop(0))