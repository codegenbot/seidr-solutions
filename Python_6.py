def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in re.findall(r'\([^()]+?\)', paren_string):
        level = 0
        nesting_level = 0
        for char in group[1:-1]:
            if char == '(':
                level += 1
            elif char == ')':
                level -= 1
            if level > nesting_level:
                nesting_level = level
        result.append(nesting_level)
    return result