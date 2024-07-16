from typing import List

def parse_nested_parens() -> List[int]:
    result = []
    # num_strings = int(input())
    num_strings = 2  # Temporary input for testing
    for _ in range(num_strings):
        paren_string = input()
        max_count = max([paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)]) // 2
        result.append(max_count)
    return result

output = parse_nested_parens()