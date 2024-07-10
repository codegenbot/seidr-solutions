```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    level = 0
    for paren in paren_string:
        if paren == '(':
            stack.append(paren)
            level += 1
        elif paren == ')':
            if stack:
                stack.pop()
                level -= 1
        if not stack and paren == ')':
            result.append(level)
    return result