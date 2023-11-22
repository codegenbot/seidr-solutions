def parse_nested_parens(paren_string: str) -> List[int]:
    count = 0
    result = []
    for paren in paren_string:
        if paren == "(":
            count += 1
        elif paren == ")":
            count -= 1
        result.append(count)
    return result