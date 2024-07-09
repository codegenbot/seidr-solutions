from typing import List

def parse_nested_parens() -> List[int]:
    nested_parens = input("Enter the nested parentheses string: ").split()
    return [max([nested.count("(" * i) for i in range(1, len(nested) // 2 + 1)]) for nested in nested_parens]

result = parse_nested_parens()
print(result)