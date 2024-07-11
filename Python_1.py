def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = ""

    for c in paren_string:
        if c == " ":
            continue
        if c == "(":
            stack.append(c)
            groups += c
        elif c == ")":
            if stack:
                stack.pop()
                groups += c
                if not stack:
                    result.append(groups.rstrip(")"))
                    groups = ""
            else:
                return []
        elif c == "(" and not stack:
            return []

    if stack:
        return []
    result.append(groups.rstrip(")"))
    return [groups] + result