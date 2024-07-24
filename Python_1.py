from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char in "()":
            temp += char
        elif temp:
            result.append(temp)
            temp = ""
    if temp:
        result.append(temp)
    return result

paren_string = input("Enter a string with parentheses: ")
output = separate_paren_groups(paren_string)
print(output)