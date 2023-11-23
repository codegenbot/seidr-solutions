from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    counts = []
    open_count = 0
    stack = []
    for i, paren in enumerate(paren_string):
        if paren == '(':
            open_count += 1
            stack.append(i)
        elif paren == ')':
            open_count -= 1
            counts.append(stack.pop() + 1)
    return counts