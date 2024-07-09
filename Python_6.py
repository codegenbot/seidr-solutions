from typing import List

def parse_nested_parens() -> List[int]:
    input_string = input()
    paren_string = input_string.split()
    return [
        max([paren.count("(" * i) for i in range(1, len(paren) // 2 + 1)])
        for paren in paren_string
    ]

result = parse_nested_parens()
print(result)