```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        max_depth = 0
        current_depth = 0
        for c in s:
            if c == '(':
                current_depth += 1
                max_depth = max(max_depth, current_depth)
            elif c == ')':
                current_depth -= 1
        result.append(max_depth)
    return result