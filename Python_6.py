def parse_nested_parens(paren_string):
    result = []
    max_level, level = 0, 0
    for group in paren_string.split():
        for char in group:
            if char == "(":
                level += 1
            elif char == ")":
                level -= 1
                if level < 0:
                    raise ValueError("Unbalanced parentheses")
            if level > max_level:
                max_level = level
        result.append(max_level)
    return result