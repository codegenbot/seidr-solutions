from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    counts = []
    open_count = 0  
    for paren in paren_string:
        if paren == '(':
            open_count += 1
        elif paren == ')':
            counts.append(open_count)
            open_count -= 1
    return counts