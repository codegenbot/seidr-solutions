def parse_nested_parens(paren_string: str) -> list:
    result = []
    level = 0
    for char in paren_string.replace(" ", ""):
        if char not in ["(", ")"]:
            raise ValueError("Invalid character in input string")
        if char == "(":
            level += 1
            result.append(level)
        elif char == ")":
            while level > 1:
                result.pop()
                level -= 1
    return result