```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    nesting_level = 0
    for char in paren_string:
        if char == '(':
            nesting_level += 1
            result.append(nesting_level)
        elif char == ')':
            nesting_level -= 1
            result.append(nesting_level)
    return result