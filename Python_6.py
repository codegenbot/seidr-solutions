def parse_nested_parens(paren_string: str) -> List[int]:
    counts = []
    stack = []
    max_count = 0

    for char in paren_string:
        if char == "(":
            stack.append(char)
            max_count = max(max_count, len(stack))
        elif char == ")":
            stack.pop()

    return [max_count]

print(parse_nested_parens('(()()) ((())) () ((())()())'))