def parse_nested_parens(paren_string):
    max_count = 0
    count = 0
    for char in paren_string:
        if char == '(':
            count += 1
            max_count = max(max_count, count)
        elif char == ')':
            count -= 1
    return [max_count]