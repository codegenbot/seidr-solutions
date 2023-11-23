def parse_nested_parens(paren_string: str) -> List[int]:
    count = 0
    max_count = 0
    result = []

    for char in paren_string:
        if char == '(':
            count += 1
            max_count = max(max_count, count)
        elif char == ')':
            count -= 1

    for char in paren_string.split():
        count = 0
        for ch in char:
            if ch == '(':
                count += 1
        result.append(count)

    return result