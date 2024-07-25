def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    cur_group = ""
    for ch in paren_string:
        if ch == "(":
            cur_group = ""
        elif ch == ")":
            result.append(cur_group)
        elif ch != " ":
            cur_group += ch
    return result