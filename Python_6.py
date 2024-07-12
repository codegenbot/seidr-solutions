Here is the solution:

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        stack = 0
        max_level = 0
        for char in s:
            if char == '(':
                stack += 1
                max_level = max(max_level, stack)
            elif char == ')':
                stack -= 1
        result.append(max_level)
    return result