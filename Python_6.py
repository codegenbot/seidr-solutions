def parse_nested_parens(paren_string: str) -> List[int]:
    results = []
    depth = 0
    for ch in paren_string:
        if ch == '(':
            depth += 1
        elif ch == ')':
            if depth > 0:
                results.append(depth)
                depth -= 1
    return results