from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    for char in paren_string:
        if char == "(":
            if current_group:
                result.append(current_group)
                current_group = ""
            current_group += char
        elif char == ")":
            current_group += char
            result.append(current_group)
            current_group = ""
    return result

# Test the function with input format
input_string = "(a)(b)(c)"
print(separate_paren_groups(input_string))