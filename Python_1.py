def separate_paren_groups(paren_string):
    result = []
    depth = 0
    start = 0
    for i in range(len(paren_string)):
        if paren_string[i] == "(":
            depth += 1
        elif paren_string[i] == ")":
            depth -= 1
            if depth == 0 and start < len(paren_string):
                result.append(paren_string[start : i + 1])
                start = i + 1
    return result