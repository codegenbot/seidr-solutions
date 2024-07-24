`def parse_nested_parens(paren_string: str) -> List[int]:`
`    result = []`
`    level = 0`
`    max_level = 0`
`    for group in paren_string.split():`
`        if len(group) == 0:` 
`            continue`
`        for char in group:` 
`            if char == '(':` 
`                level += 1`
`                max_level = max(max_level, level)`
`            elif char == ')':`
`                level -= 1`
`        result.append(max_level)`
`    return result`