from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    group_start = 0
    
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if stack:
                stack.pop()
                if not stack:
                    groups.append(paren_string[group_start:group_start+len(groups[-1])])
        group_start += 1

    return groups
    
paren_string = input()
result = separate_paren_groups(paren_string)
print(result)