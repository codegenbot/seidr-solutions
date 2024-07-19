from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    count = 0
    max_count = 0

    for i in range(len(paren_string)):
        if paren_string[i] == "(":
            count += 1
            max_count = max(max_count, count)
        elif paren_string[i] == ")":
            count -= 1
            if count < 0:
                return [0]

    if count != 0:
        return [0]

    return [max_count]

input_paren_string = input().strip()
if all(char in ['(', ')'] for char in input_paren_string):
    result = parse_nested_parens(input_paren_string)
    print(result[0])