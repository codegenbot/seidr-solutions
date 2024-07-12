def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    temp_stack = []
    for char in paren_string:
        if char == '(':
            temp_stack.append(1)
        elif char == ')':
            while len(temp_stack) > 0 and temp_stack[-1] != 1:
                temp_stack.pop()
            if len(temp_stack) == 0:
                result.append(len(result) + 1)
            else:
                temp_stack.pop()
    return result