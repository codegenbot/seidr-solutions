from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []
    for char in paren_string:
        if char == " ":
            continue
        if char in ["(", "[", "{"]:
            stack.append(char)
            groups.append("")
        elif char in {")": ")", "]": "[", "}": "{"}[char]:
            if stack:
                top = stack.pop()
                groups[-1] += char
                if (
                    not stack
                    and {")": ")", "]": "[", "}": "{"}[char]
                    == {"(": ")", "[": "]", "{": "}"}[top]
                ):
                    result.append(groups.pop().lstrip().rstrip())
                elif (
                    stack
                    and {")": ")", "]": "[", "}": "{"}[char]
                    == {"(": ")", "[": "]", "{": "}"}[stack[-1]]
                ):
                    while (
                        stack
                        and {")": ")", "]": "[", "}": "{"}[char]
                        != {")": ")", "]": "[", "}": "{"}["({".index(stack[-1])]
                    ):
                        stack.pop()
                    result.append(groups.pop().lstrip().rstrip())
            else:
                if stack:
                    while (
                        stack
                        and stack[-1] not in {"(", "[", "{"}
                    ):
                        stack.pop()
                    if (stack and stack[-1] in {")": ")", "]": "[", "}": "{"}):
                        result.append(groups.pop().lstrip().rstrip())
    return result