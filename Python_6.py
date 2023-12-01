def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    count = 0

    for paren in paren_string:
        if paren == "(":
            count += 1
        elif paren == ")":
            count -= 1

        result.append(count)

    return result