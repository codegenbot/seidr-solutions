```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []
    for char in paren_string:
        if char == ' ': 
            continue
        if char in ['(', '[', '{']:
            stack.append(char)
            groups.append('')
        elif char in {')': ')', ']': '[', '}': '{'}[char]:
            if stack: 
                top = stack.pop()
                groups[-1] += char
                if not stack and {')': ')', ']': '[', '}': '{'}[char] == {')': ')', ']': '[', '}': '{'}[top]:
                    result.append(groups.pop().lstrip().rstrip())
            else:
                while stack and (stack[-1] in ['(', '[']) and {')': ')', ']': '[', '}': '{'}[char] != {'(': ')', '[': ']', '{': '}'}[stack[-1]]:
                    stack.pop()
                if not stack and {')': ')', ']': '[', '}': '{'}[char] == {')': ')', ']': '[', '}': '{'}['({'.index(top)]:
                    result.append(groups.pop().lstrip().rstrip())
    return result