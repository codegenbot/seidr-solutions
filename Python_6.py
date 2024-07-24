`def parse_nested_parens(paren_string: str) -> List[int]:`
    result = []
    level = 0
    for char in paren_string:
        if char == '(':
            level += 1
        elif char == ')':
            level -= 1
        if level == 0 and char != ' ': 
            result.append(len(result))
    return result