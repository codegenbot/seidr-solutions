from typing import List


def parse_nested_parens(paren_string: str) -> int:
    return max(
        [paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)]
    )

paren_string = input("Enter the string of parentheses: ")
result = parse_nested_parens(paren_string)
print(result)