from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []
    for char in paren_string:
        if char == ' ': 
            continue
        if char == '(':
            groups.append('')
            stack.append(char)
        elif char in ['(', '[', '{']:
            if not groups: stack.append(char)  
            else: stack.append(char); groups[-1] += char   
        elif char in {')': ')', ']': '[', '}': '{'}[char]:
            if stack: 
                top = stack.pop()
                groups[-1] += char
                if not stack and {')': ')', ']': '[', '}': '{'}[char] == {')': ')', ']': '[', '}': '{'}[top]:
                    result.append(groups.pop().lstrip().rstrip())
    return result