```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []

    def count_levels(group):
        level = 0
        max_level = 0
        for char in group:
            if char == '(':
                level += 1
            elif char == ')':
                level -= 1
            max_level = max(max_level, level)
        return max_level

    for group in paren_string.split():
        result.append(count_levels(group))
    return result