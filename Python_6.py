def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    counter = 0
    for char in paren_string:
        if char == "(":
            counter += 1
        elif char == ")":
            counter -= 1
        if char == ")":
            result.append(counter)