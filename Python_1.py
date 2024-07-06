from typing import List
import re


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = re.split("(\(|\))", paren_string)
    temp_group = ""

    for group in groups:
        if group == "(":
            stack.append(group)
            temp_group += group
        elif group == ")":
            while len(stack) and stack[-1] != "(":
                temp_group += stack.pop()
            if not stack or stack.pop() != "(":
                return []
            temp_group += group
        else:
            temp_group += group

    while stack:
        temp_group += stack.pop()

    result.append(temp_group)

    return [temp_group]