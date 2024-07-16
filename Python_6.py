def parse_nested_parens(paren_strings):
    result = []
    for string in paren_strings:
        count = 0
        for char in string:
            if char == '(':
                count += 1
            elif char == ')':
                count -= 1
        result.append(count)
    return result