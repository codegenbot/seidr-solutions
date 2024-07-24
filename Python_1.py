from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char == "(":
            if current_group:
                result.append(current_group)
                current_group = ""
            stack.append("(")
        elif char == ")" and stack:
            stack.pop()
            if not stack:
                result.append(current_group)
                current_group = ""
        else:
            current_group += char

    return result

# Call the function with input string for testing
input_string = "abc(de)fg(hi(jk)lm)n"
print(separate_paren_groups(input_string))