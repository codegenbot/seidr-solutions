def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    level = 0
    for char in paren_string:
        if char == '(':
            stack.append(level)
            level += 1
        elif char == ')':
            level -= 1
            while len(stack) and level < stack[-1]:
                result.append(stack.pop())
        elif not len(stack):
            level = 0
    return result