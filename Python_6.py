def parse_nested_parens(paren_string: str) -> list:
    max_level = 0
    current_level = 0
    output = []
    for char in paren_string:
        if char == "(":
            current_level += 1
            if current_level > max_level:
                max_level = current_level
        elif char == ")":
            current_level -= 1
        else:
            continue
    output.append(max_level)
    return output