def parse_nested_parens(input_str):
    max_depth = 0
    current_depth = 0

    for char in input_str:
        if char == '(':
            current_depth += 1
            max_depth = max(max_depth, current_depth)
        elif char == ')':
            current_depth -= 1

    return max_depth

input_str = "((())) (()(()))"
output = parse_nested_parens(input_str)
print(output)