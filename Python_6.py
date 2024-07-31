Here is the completed code:

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = []
        max_level = 0
        level = 0
        for char in group:
            if char == '(':
                stack.append(char)
                level += 1
            elif char == ')':
                stack.pop()
                level -= 1
                max_level = max(max_level, level)
        result.append(max_level)
    return result