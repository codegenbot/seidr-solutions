```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        nesting = 0
        level = 1
        max_nesting = 0
        for c in s:
            if c == '(':
                nesting += 1
                level += 1
                max_nesting = max(max_nesting, level)
            elif c == ')':
                nesting -= 1
                level -= 1
        result.append(max_nesting)
    return result