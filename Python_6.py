```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = 0
        nesting = 0
        for char in group:
            if char == '(':
                stack += 1
            elif char == ')':
                stack -= 1
            if stack == 0 and nesting > 0:
                result.append(nesting)
                nesting = 0
            nesting = max(nesting, stack)
    return result