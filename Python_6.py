def parse_nested_parens(paren_string: str) -> int:
    if not paren_string:
        return -1

    stack = []
    max_depth = 0
    current_depth = 0
    for char in paren_string:
        if char == "(":
            stack.append(char)
            current_depth += 1
            max_depth = max(max_depth, current_depth)
        elif char == ")":
            if stack:
                stack.pop()
                current_depth -= 1
    if stack:
        return -1
    else:
        return max_depth

result = [parse_nested_parens(paren_string) for paren_string in ['((()))', '((())', '(()', '', '()()()']]
print(result)