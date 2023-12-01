def separate_paren_groups(paren_string: str) -> List[str]:
    inner_groups = []
    current_group = ""
    open_brace_count = 0

    for char in paren_string:
        if char == "(":
            open_brace_count += 1
        elif char == ")":
            open_brace_count -= 1

        current_group += char

        if open_brace_count == 0:
            inner_groups.append(current_group)
            current_group = ""

    return inner_groups