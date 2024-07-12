from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    start = -1
    
    for i, char in enumerate(paren_string):
        if char in '({':
            if not stack:
                start = i
            stack.append(char)
        elif char in ')}':
            if not stack:
                result.append(paren_string[start:i+1])
            else:
                stack.pop()

    i += 1
    if stack:
        result.append(paren_string[start:])

    return result