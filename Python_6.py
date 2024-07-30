from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    return max([paren_string.count(i * "(") for i in range(len(paren_string) + 1)]) // 2

while True:
    paren_string = input("Enter the nested parentheses string: ")
    if all(c in '()' for c in paren_string):
        break

print(parse_nested_parens(paren_string))