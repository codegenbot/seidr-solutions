```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = 0
        max_level = 0
        level_start = -1
        for i, char in enumerate(group):
            if char == '(':
                stack += 1
                if stack == 1:
                    level_start = i
            elif char == ')':
                stack -= 1
            if stack > max_level:
                max_level = stack
        result.append(len(group) - (level_start + max_level))
    return result