```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    temp_level = 0
    for char in paren_string:
        if char == '(':
            temp_level += 1
        elif char == ')':
            temp_level -= 1
        if temp_level > 0:
            result.append(temp_level)
    return result