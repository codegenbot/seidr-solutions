from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    counts = []
    stack = []
    
    for paren in paren_string.split():
        count = 0
        for c in paren:
            if c == '(':
                stack.append('(')
            elif c == ')':
                if stack:
                    stack.pop()
                else:
                    count += 1
        counts.append(count + len(stack))
        stack.clear()
    
    return counts