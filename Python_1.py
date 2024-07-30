def separate_paren_groups(s):
    result = []
    current_group = ""
    open_count = 0

    for char in s:
        if char == "(":
            if open_count == 0:
                if current_group:
                    result.append(current_group)
                current_group = "("
            else:
                current_group += "("
            open_count += 1
        elif char == ")":
            current_group += ")"
            open_count -= 1
            if open_count == 0:
                result.append(current_group)
                current_group = ""
        else:
            current_group += char

    if current_group:
        result.append(current_group)

    return result