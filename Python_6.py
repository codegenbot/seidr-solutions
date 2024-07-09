from typing import List
def parse_nested_parens() -> List[int]:
    paren_strings = input("Enter the nested parentheses strings separated by spaces: ").split()
    return [max([paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)]) for paren_string in paren_strings]

result = parse_nested_parens()
print(result)