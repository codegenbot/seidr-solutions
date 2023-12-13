from typing import List

def parse_nested_parens(paren_strings: List[str]) -> List[int]:
    return [abs(paren.count('(') - paren.count(')')) for paren in paren_strings]

paren_strings = input().split()
result = parse_nested_parens(paren_strings)
print(result)