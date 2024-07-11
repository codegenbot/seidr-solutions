```
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    def check(s):
        stack = []
        groups = []
        temp_group = ""
        for char in s:
            if char == "(":
                stack.append(char)
                temp_group += "(" + char
            elif char == ")":
                if stack:
                    stack.pop()
                    temp_group += ")" + char
                else:
                    groups.append(temp_group + ")" + char)
                    temp_group = ""
            else:
                temp_group += char
        if stack:
            while stack:
                temp_group += "(" + s[1:stack.index("(") + 1]
                s = s[stack.index("(") + 1:]
                stack.pop()
            groups.append(temp_group + s)
        else:
            groups.append(temp_group + s)

        return [group for group in groups.split(")(") if group]

    return check(paren_string)