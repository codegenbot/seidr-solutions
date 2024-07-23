```Python
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(1)
        elif char == ')':
            level = sum(stack)
            result.append(level)
            while stack and stack.pop() != 1:
                pass
    return result