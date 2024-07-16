def parse_nested_parens(paren_string: str) -> list:
    result = []
    for s in paren_string.split():
        result.append(max([s.count("(" * i) for i in range(1, len(s) // 2 + 1)]) // 2)
    return result

input_str = input().strip()
output = parse_nested_parens(input_str)
print(output)