from typing import List
import sys

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

if len(sys.argv) != 2:
    print("Usage: python script.py <paren_string>")
else:
    input_string = sys.argv[1]
    output = separate_paren_groups(input_string)
    print(output)