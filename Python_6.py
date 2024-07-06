Here is the solution:

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        stack = []
        max_depth = 0
        for c in s:
            if c == '(':
                stack.append(c)
                max_depth += 1
            elif c == ')':
                stack.pop()
                if not stack:
                    max_depth -= 1
        result.append(max_depth)
    return result