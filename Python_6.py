```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    max_level = 0
    for char in paren_string:
        if char == '(':
            max_level += 1
            result.append(max_level)
        elif char == ')':
            max_level -= 1
            result.append(max_level)
    return result