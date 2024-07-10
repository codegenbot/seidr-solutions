```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        nesting = 0
        max_nesting = 0
        for char in s:
            if char == '(':
                nesting += 1
            elif char == ')':
                nesting -= 1
            max_nesting = max(max_nesting, nesting)
        result.append(max_nesting)
    return result