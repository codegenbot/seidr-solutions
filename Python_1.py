def separate_paren_groups(s):
    result = []
    current_group = ""

    for char in s:
        if char == "(" and current_group != "":
            result.append(current_group)
            current_group = ""
        current_group += char
        if char == ")" and current_group != "":
            result.append(current_group)
            current_group = ""

    if current_group != "":
        result.append(current_group)

    return result