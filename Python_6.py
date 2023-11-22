from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    counts = []
    curr_count = 0

    for char in paren_string:
        if char == '(':
            curr_count += 1
        elif char == ')':
            curr_count -= 1

        counts.append(curr_count)

    return counts