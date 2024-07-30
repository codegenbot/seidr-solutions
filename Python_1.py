def separate_paren_groups(s):
    result = []
    current_group = ""

    for char in s:
        if char == "(":
            if current_group:
                result.append(current_group)
            current_group = "("
        elif char == ")":
            current_group += ")"
            result.append(current_group)
            current_group = ""
        else:
            current_group += char

    if current_group:
        result.append(current_group)

    return [group for group in result if group.count('(') == group.count(')')]