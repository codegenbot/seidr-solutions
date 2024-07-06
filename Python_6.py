```
def parse_nested_parens(paren_string: str) -> list[int]:
    result = []
    level = 0
    for char in paren_string:
        if char == '(':
            level += 1
            result.append(level)
        elif char == ')':
            level -= 1
            if level < 0:
                return [level] if level > 0 else []
    return [level] if level > 0 else []