from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([paren.count("(" * i) for i in range(1, len(paren) // 2 + 1)])
        for paren in paren_string.split()
    ]

input_string = input("Enter the string with parentheses: ")

output = parse_nested_parens(input_string)
print(output)