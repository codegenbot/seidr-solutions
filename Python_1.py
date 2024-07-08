from typing import List
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    stack = 0
    for char in paren_string:
        if char == "(":
            stack += 1
        temp += char
        if char == ")":
            stack -= 1
            if stack == 0:
                result.append(temp)
                temp = ""
    return result

input_string = input("Enter a string with parentheses: ")
print(separate_paren_groups(input_string))