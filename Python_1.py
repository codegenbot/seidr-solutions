```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []
    in_group = False
    group = ''
    for char in paren_string:
        if char == ' ': 
            continue
        if char in ['(', '[', '{']:
            stack.append(char)
            groups.append('')
            in_group = True
            group = ''
        elif char in {')': ')', ']': '[', '}': '{'}[char]:
            if stack: 
                top = stack.pop()
                group += char
                if not stack and {')': ')', ']': '[', '}': '{'}[char] == {')': ')', ']': '[', '}': '{'}[top]:
                    result.append(group.lstrip().rstrip())
                    in_group = False
            else:
                while stack and (stack[-1] in ['(', '[']) and {')': ')', ']': '[', '}': '{'}[char] != {'(': ')', '[': ']', '{': '}'}[stack[-1]]:
                    stack.pop()
                if not stack:
                    result.append(group.lstrip().rstrip())
                    in_group = False
    return result