def parse_nested_parens(paren_string: str) -> list:
    result = []
    for group in paren_string.split():
        count = 0
        for char in group:
            if char == "(":
                count += 1
            elif char == ")":
                count -= 1
        result.append(count)
    return result