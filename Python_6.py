def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    max_count = 0

    for char in paren_string:
        if char == "(":
            stack.append("(")
            max_count = max(max_count, len(stack))
        elif char == ")":
            if stack and stack[-1] == "(":
                stack.pop()
            else:
                return [0]

    if stack:
        return [0]
    return [max_count]


input_paren_string = input().strip()
if all(char in ["(", ")"] for char in input_paren_string):
    result = parse_nested_parens(input_paren_string)
    print(result[0])