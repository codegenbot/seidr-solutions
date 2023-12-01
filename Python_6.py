def parse_nested_parens(paren_string: str) -> List[int]:
    nested_counts = []
    count = 0

    for char in paren_string:
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1

        nested_counts.append(count)

    return nested_counts