def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    group = ""
    for char in paren_string:
        if char.isspace():
            continue
        elif char in ["(", "[", "{"]:
            group += char
        elif char in [")", "]", "}"]:
            if group:
                while (
                    group[-1] in ["(", "[", "{"]
                    and not group[-1] == "("
                    or group[-1] == "["
                    or group[-1] == "{"
                ):
                    group = group[:-1]
                groups.append(group)
                group = ""
    if group:
        groups.append(group)
    return groups