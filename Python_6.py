def parse_nested_parens(paren_string: str) -> List[int]:
    max_depth = 0
    current_depth = 0
    stack = []

    for paren in paren_string:
        if paren == '(':
            stack.append(paren)
            current_depth += 1
            max_depth = max(max_depth, current_depth)
        elif paren == ')':
            stack.pop()
            current_depth -= 1

    return [max_depth]