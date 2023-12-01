from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    open_paren = {'(', '[', '{'}
    close_paren = {')', ']', '}'}

    groups = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char in open_paren:
            stack.append(char)
            current_group += char
        elif char in close_paren:
            if len(stack) != 0 and stack[-1] == get_matching_paren(char):
                stack.pop()
                current_group += char
            else:
                groups.append(current_group)
                current_group = ""
        else:
            current_group += char

    groups.append(current_group)

    return groups

def get_matching_paren(paren: str) -> str:
    if paren == ')':
        return '('
    if paren == ']':
        return '['
    if paren == '}':
        return '{'