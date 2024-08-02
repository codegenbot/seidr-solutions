def separate_paren_groups(s: str) -> List[str]:
    result = []
    group = ""

    for char in s:
        if char == "(":
            group += char
        elif char == ")":
            if group:
                result.append(group + " (" + char)
                group = ""
            else:
                result.append(")" + char)
        elif group:
            group += char

    return result