def parse_nested_parens(paren_string):
    result = []
    for group in paren_string.split():
        levels = []
        level = 0
        for i, char in enumerate(group):
            if char == "(":
                level += 1
            elif char == ")":
                level -= 1
            levels.append(level)
        result.extend(levels)
    return result