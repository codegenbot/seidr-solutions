from typing import List

def separate_paren_groups(parentheses_string: str) -> List[str]:
    result = []
    current_group = ""
    count = 0
    for char in parentheses_string:
        if char == "(":
            if count > 0:
                current_group += char
            count += 1
        elif char == ")":
            count -= 1
            if count > 0:
                current_group += char
            if count == 0:
                result.append(current_group)
                current_group = ""
    return result

input_string = input("Enter a string with parentheses: ")
output = separate_paren_groups(input_string)
print(output)