def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    for char in paren_string:
        if char == "(":
            while level > 0:
                result.append(level)
                level -= 1
            level += 1
        elif char == ")":
            level -= 1
            while level < 0:
                result.pop()
                level += 1

    return [i - 1 for i in result]