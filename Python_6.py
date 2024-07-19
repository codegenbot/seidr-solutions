input_paren_string = input().strip()
if all(char in ["(", ")"] for char in input_paren_string):
    result = parse_nested_parens(input_paren_string)
    print(result[0])
else:
    print(0)