def parse_nested_parens(paren_string: str) -> List[int]:
    groups = paren_string.split()
    levels = []
    for group in groups:
        max_level = 0
        current_level = 0
        for char in group:
            if char == '(':
                current_level += 1
                max_level = max(max_level, current_level)
            elif char == ')':
                current_level -= 1
        levels.append(max_level)
    return levels