```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char in '():':
            if char == '(':
                stack.append(char)
                current_group += char
            else:
                if not stack or stack.pop() != '(':
                    current_group += char
                else:
                    result.append(current_group + char)
                    current_group = ''
    result.append(current_group)
    
    return result