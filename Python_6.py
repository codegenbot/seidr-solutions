Here is the solution:

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        stack = 0
        max_stack = 0
        for c in s:
            if c == '(':
                stack += 1
                max_stack = max(max_stack, stack)
            elif c == ')':
                stack -= 1
        result.append(max_stack)
    return result