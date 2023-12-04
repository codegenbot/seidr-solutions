def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        count = 0
        for c in s:
            if c == '(':
                count += 1
            elif c == ')':
                count -= 1
        result.append(count)
    return result