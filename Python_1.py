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

# Read input from the user
input_string = input().strip()

# Split input if needed
for s in input_string.split():
    result = separate_paren_groups(s)
    print(result)