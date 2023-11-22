from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    group = ""
    for char in paren_string:
        group += char
        if char == ")":
            result.append(group)
            group = ""
    return result

input_string = "((a(b(c)))(d)e)"
output = separate_paren_groups(input_string)
print(output)