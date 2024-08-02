def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split(','):
        nesting_level = 0
        max_nesting_level = 0
        for char in group:
            if char == '(':
                nesting_level += 1
                if nesting_level > max_nesting_level:
                    max_nesting_level = nesting_level
            elif char == ')':
                if nesting_level > 0:
                    nesting_level -= 1
                else:
                    result.append(max_nesting_level)
                    max_nesting_level = 0
        result.append(max_nesting_level)
    return result