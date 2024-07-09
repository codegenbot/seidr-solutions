def parse_nested_parens() -> List[int]:
    paren_string = input("Enter the nested parentheses string: ")
    return [max([paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)])]

result = parse_nested_parens()
print(result)