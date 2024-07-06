
def parse_nested_parens(paren_string: str) -> List[int]:
    max_levels = []
    for group in paren_string.split():
        levels = 1
        for char in group:
            if char == "(":
                levels += 1
            elif char == ")":
                levels -= 1
        max_levels.append(levels)
    return max_levels