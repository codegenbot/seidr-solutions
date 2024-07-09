def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    count = 0
    for char in paren_string:
        if char == "(":
            count += 1
            result.append(count)
        elif char == ")":
            result.append(count)
            count -= 1
    return [i // 2 for i in result if i % 2 == 0]