from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups, balance, current_group = [], 0, []
    for char in paren_string:
        current_group.append(char)
        if char == '(': balance += 1
        elif char == ')': balance -= 1
        if balance == 0 and current_group:
            groups.append("".join(current_group))
            current_group = []
    return groups

paren_string = input().strip()
print(separate_paren_groups(paren_string))