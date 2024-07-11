```
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []
    group_str = ''

    for char in paren_string:
        if char == ' ': 
            continue
        
        if char in ['(', '[', '{']:
            stack.append(char)
            groups.append('')
            group_str += char
        elif char in {')': ')', ']': '[', '}': '{'}[char]:
            while stack and (stack[-1] in ['(', '[']) and {')': ')', ']': '[', '}': '{'}[char] != {'(': ')', '[': ']', '{': '}'}[stack[-1]]:
                stack.pop()
            if not stack:
                groups.append(group_str.lstrip().rstrip())
            else:
                top = stack.pop()
                group_str += char
                if {')': ')', ']': '[', '}': '{'}[char] == {'(': ')', '[': ']', '{': '}'}[top]:
                    result.append(group_str.lstrip().rstrip())
                    groups.append('')
                    group_str = ''
    return result