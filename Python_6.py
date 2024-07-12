def parse_nested_parens(paren_string: str) -> List[int]:
    levels = []
    for group in paren_string.split():
        max_level = 0
        cur_level = 0
        for char in group:
            if char == "(":
                cur_level += 1
                if cur_level > max_level:
                    max_level = cur_level
            elif char == ")":
                cur_level -= 1
        levels.append(max_level)
    return levels