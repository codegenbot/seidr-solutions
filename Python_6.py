def parse_nested_parens(paren_string):
    result = []
    for group in paren_string.split():
        levels = []
        for i, char in enumerate(group):
            if char == "(":
                level = 1 + parse_nested_parens(group[i + 1 :])[0]
            elif char == ")":
                if i < len(group) - 1:
                    level = -1 + parse_nested_parens(group[: i - 1])[0]
                else:
                    level = 0
        levels.append(level)
        result.extend(levels)
    return result