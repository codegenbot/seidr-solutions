import sys
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []

    start = None
    for i, char in enumerate(paren_string):
        if char == "(" or char == "{":
            if not stack:
                start = i
            stack.append(char)
        elif char == ")" or char == "}":
            stack.pop()
            if not stack:
                result.append(paren_string[start : i + 1])

    if stack:
        result.append(paren_string[start:])

    return result


if len(sys.argv) > 1:
    input_string = sys.argv[1]
else:
    input_string = input("Enter the string with parentheses: ")

output = separate_paren_groups(input_string)
print(output)