def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    for char in paren_string:
        if char == "(":
            level += 1
            result.append(level)
        elif char == ")":
            if level > 0:
                level -= 1
                result.append(level)
    return [i - 1 for i in result]