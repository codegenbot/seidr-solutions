```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(1)
        elif char == ')':
            if len(stack):
                stack.pop()
            else:
                stack.append(-1)
    return [stack.count(i) for i in set(stack)]