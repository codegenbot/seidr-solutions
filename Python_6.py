def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    for char in paren_string.replace(" ", ""):
        if char == "(":
            while len(result) <= level:
                result.append(0)
            level += 1
            result[-1] = level
        elif char == ")":
            level -= 1
    return [i - 1 for i in result]