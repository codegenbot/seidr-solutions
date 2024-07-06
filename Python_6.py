def parse_nested_parens(paren_string: str) -> list[int]:
    result = []
    level = 0
    for char in paren_string:
        if char == "(":
            level += 1
        elif char == ")":
            level -= 1
        else:
            continue
        result.append(level)
    return result