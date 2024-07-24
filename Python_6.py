`def parse_nested_parens(paren_string: str) -> List[int]:`
`    result = []`
`    stack = [0]`
`    for char in paren_string:` 
`        if char == '(':`
`            stack.append(stack[-1] + 1)`
`        elif char == ')':`
`            stack.pop()`
`    return stack`