def parse_nested_parens(paren_string):
    result = []
    current_level = 0
    for char in paren_string:
        if char == '(':
            current_level += 1
        elif char == ')':
            current_level -= 1
        result.append(current_level)
    return result