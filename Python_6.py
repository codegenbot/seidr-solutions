def parse_nested_parens(paren_string: str) -> List[int]:
    return max([paren_string.count("(" * i) for i in range(len(paren_string) + 1)]) // 2

paren_string = input("Enter a string with nested parentheses: ")
print(parse_nested_parens(paren_string))