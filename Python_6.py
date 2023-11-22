from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    counts = []
    stack = []
    for paren in paren_string.split():
        open_count = 0
        for char in paren:
            if char == '(':
                open_count += 1
                stack.append('(')
            elif char == ')':
                if not stack:
                    return []
                stack.pop()
        if stack:
            return []
        counts.append(open_count)
    return counts