def parse_nested_parens(paren_string: str) -> list[int]:
    result = []
    for group in paren_string.split():
        level = 0
        for char in group:
            if char == "(":
                level += 1
            elif char == ")":
                level -= 1
        result.append(level)

    # Recursively parse each group as a separate nested parentheses problem
    for group in paren_string.split():
        levels = []
        if len(group) > 0:
            for i, char in enumerate(group):
                if char == "(":
                    level = 1 + parse_nested_parens(group[i + 1 :])[0]
                elif char == ")":
                    level = -1 + parse_nested_parens(group[: i - 1])[0]
            levels.append(level)
        result.extend(levels)
    return result