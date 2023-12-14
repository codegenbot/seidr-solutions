def parse_nested_parens(paren_string: str) -> List[int]:
    return [abs(paren_string[:i].count('(') - paren_string[:i].count(')')) for i in range(1, len(paren_string) + 1)]

paren_string = input()
result = parse_nested_parens(paren_string)
print(result)