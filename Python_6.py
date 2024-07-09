from typing import List
def parse_nested_parens() -> List[int]:
    paren_string = input()
    if not all([paren.count("(") == paren.count(")") for paren in paren_string.split()]):
        return "Invalid input format. Each nested parentheses string should have equal number of opening and closing parentheses."
    return [
        max([paren.count("(" * i) for i in range(1, len(paren) // 2 + 1)])
        for paren in paren_string.split()
    ]

result = parse_nested_parens()
print(result)