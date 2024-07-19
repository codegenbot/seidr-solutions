from typing import List
import sys

def parse_nested_parens() -> List[int]:
    paren_string = sys.stdin.readline().strip()
    count = 0
    max_count = 0

    for i in range(len(paren_string)):
        if (
            paren_string[i] == "("
            and i + 1 < len(paren_string)
            and paren_string[i + 1] == ")"
        ):
            count += 1
            max_count = max(max_count, count)
        elif paren_string[i] == ")":
            count = 0

    return [max_count]

result = parse_nested_parens()
print(result[0])