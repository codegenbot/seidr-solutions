from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    count = 0
    for char in paren_string:
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

# Read input as a raw string and split by comma
input_string = input()
paren_strings = input_string.split(',')
for paren_string in paren_strings:
    print(separate_paren_groups(paren_string))