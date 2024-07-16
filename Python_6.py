def parse_nested_parens(input_str):
    stack = []
    for char in input_str:
        if char == '(':
            stack.append(char)
        elif char == ')' and stack:
            stack.pop()
        else:
            return False
    return len(stack) == 0

input_str = "((())) (()(()))"
output = parse_nested_parens(input_str)
print(output)