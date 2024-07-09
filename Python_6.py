from typing import List
def parse_nested_parens() -> List[int]:
    paren_string = input("Enter the nested parentheses string: ")
    if not all([all([c in "(){}[]" for c in paren]) for paren in paren_string.split()]):
        raise ValueError("Input should only contain parentheses")
    return [
        max([paren.count("(" * i) for i in range(1, len(paren) // 2 + 1)])
        for paren in paren_string.split()
    ]

result = parse_nested_parens()
print(result)