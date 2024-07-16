import sys
sys.stdin = sys.stdin.detach()

from typing import List

def parse_nested_parens() -> List[int]:
    result = []
    num_strings = int(sys.stdin.readline().strip())
    for _ in range(num_strings):
        paren_string = sys.stdin.readline().strip()
        max_count = max([paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)]) // 2
        result.append(max_count)
    return result

output = parse_nested_parens()