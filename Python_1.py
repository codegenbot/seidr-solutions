from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    count = 0

    for char in paren_string:
        current_group += char
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1

        if count == 0:
            result.append(current_group)
            current_group = ""

    return result

input_string = input("Enter the string to separate: ")
output = separate_paren_groups(input_string)
print(output)