def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for group in paren_string.split():
        level = 0
        max_level = 0
        for char in group:
            if char == '(':
                stack.append('(')
                level += 1
                max_level = level
            elif char == ')':
                stack.pop()
                level -= 1
        result.append(max_level)
    return result