```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        nesting_level = 0
        max_nesting_level = 0
        for char in s:
            if char == '(':
                nesting_level += 1
                max_nesting_level = max(max_nesting_level, nesting_level)
            elif char == ')':
                nesting_level -= 1
        result.append(max_nesting_level)
    return result