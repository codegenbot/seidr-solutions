from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    return max([paren_string.count(i * "(") for i in range(len(paren_string) + 1)]) // 2

# Uncomment the below line and provide sample input if running in a code contest platform
# paren_string = "<sample_input_string>"
paren_string = input()
print(parse_nested_parens(paren_string))