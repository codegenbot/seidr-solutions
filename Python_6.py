from typing import List

def parse_nested_parens(paren_string: str) -> int:
    return max([paren_string.count(i * "(") for i in range(len(paren_string) + 1)]) // 2

paren_string = input().strip()
print(parse_nested_parens(paren_string))