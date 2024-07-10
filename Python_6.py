```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = []
        max_level = 0
        for char in group:
            if char == '(':
                stack.append(char)
            elif char == ')':
                if stack:
                    stack.pop()
                    max_level = max(max_level, len(stack))
        result.append(max_level)
    return result