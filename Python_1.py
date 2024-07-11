from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""
    for char in paren_string:
        if char == " ":
            continue
        if char in ["(", "[", "{"]:
            stack.append(char)
            current_group += char
        elif char in {")": ")", "]": "[", "}": "{"}[char]:
            if stack:
                top = stack.pop()
                current_group += char
                if (
                    not stack
                    and {")": ")", "]": "[", "}": "{"}[char]
                    == {")": ")", "]": "[", "}": "{"}[top]
                ):
                    result.append(current_group.strip())
                    current_group = ""
            else:
                while (
                    stack
                    and (stack[-1] in ["(", "["])
                    and {")": ")", "]": "[", "}": "{"}[char]
                    != {"(": ")", "[": "]", "{": "}"}[stack[-1]]
                ):
                    stack.pop()
                if (
                    not stack
                    and {")": ")", "]": "[", "}": "{"}[char]
                    == {")": ")", "]": "[", "}": "{"}["({".index(top)]
                ):
                    result.append(current_group.strip())
                    current_group = ""
    if current_group:
        result.append(current_group)
    return result