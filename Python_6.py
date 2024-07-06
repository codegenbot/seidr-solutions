def parse_nested_parens(paren_string: str) -> list[int]:
    result = []
    level = 0
    for char in paren_string:
        if char == '(':
            level += 1
            if level > 0:
                result.append(int(char))
        elif char == ')':
            level -= 1