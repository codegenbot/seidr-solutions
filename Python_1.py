from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    stack = []
    
    for char in paren_string:
        if char == "(":
            if current_group:
                result.append(current_group)
            if stack:
                stack[-1] += current_group
            current_group = ""
            stack.append("(")
        elif char == ")":
            if stack:
                stack.pop()
            if current_group:
                if stack:
                    stack[-1] += current_group + ")"
                else:
                    result.append(current_group + ")")
            current_group = ""
        elif char.isalnum():
            current_group += char

    if current_group:
        result.append(current_group)

    return result

paren_string = input()
print(separate_paren_groups(paren_string))