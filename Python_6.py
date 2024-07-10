def parse_nested_parens(paren_string: str) -> List[int]:
    if '(' not in paren_string or ')' not in paren_string:
        return []

    result = []
    for group in paren_string.split():
        level = 0
        deepest = 0
        for char in group:
            if char == '(':
                level += 1
                deepest = max(deepest, level)
            elif char == ')':
                level -= 1
        result.append(deepest)
    return result