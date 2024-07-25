def parse_nested_parens(paren_string: str) -> List[int]:
    levels = []
    curr_level = 0
    for char in paren_string:
        if char == "(":
            curr_level += 1
        elif char == ")":
            levels.append(curr_level)
            curr_level -= 1
    return levels