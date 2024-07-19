from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    open_count = 0

    for char in paren_string:
        if char == '(':
            open_count += 1
        temp += char

        if char == ')' and open_count > 0:
            open_count -= 1

        if open_count == 0:
            result.append(temp)
            temp = ""

    return result

# Read input from user
paren_string = input("Enter a string with parentheses: ")
print(separate_paren_groups(paren_string))