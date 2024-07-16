from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split('\n'):
        if not s:
            break
        result.append(max([s.count("(" * i) for i in range(1, len(s) // 2 + 1)]) // 2)
    return result

input_str = ""
while True:
    line = input().strip()
    if not line:
        break
    input_str += line + '\n'

output = parse_nested_parens(input_str)
print(output)