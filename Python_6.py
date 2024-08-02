```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        nesting_level = 0
        max_nesting_level = 0
        for char in group:
            if char == '(':
                nesting_level += 1
                if nesting_level > max_nesting_level:
                    max_nesting_level = nesting_level
            elif char == ')':
                nesting_level -= 1
                if nesting_level < max_nesting_level:
                    max_nesting_level = nesting_level
        result.append(max_nesting_level)
    return result