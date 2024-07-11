from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    def check(s):
        stack = []
        groups = []
        for char in s:
            if char == "(":
                stack.append(char)
            elif char == ")":
                if stack:
                    stack.pop()
                else:
                    groups.append("(" + char)
            else:
                if stack:
                    groups.append("(" + s[1 : s.index(char)] + ")")
                    s = s[s.index(char) + 1 :]
        while stack:
            groups.append("(" + s[: stack.index("(") + 1])
            s = s[stack.index("(") + 1 :]
            stack.pop()
        groups.append(s)
        return groups

    return check(paren_string)