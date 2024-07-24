from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char == "(":
            if stack:
                result.append(current_group)
            stack.append("(")
            current_group = ""
        elif char == ")" and stack:
            stack.pop()
            if not stack:
                result.append(current_group)
        else:
            current_group += char

    return result

print(separate_paren_groups("abc(def)ghi(jkl)mno"))