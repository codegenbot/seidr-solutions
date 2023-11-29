from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    result = []
    count = 0

    for char in paren_string:
        if char == "(":
            stack.append("(")
            count += 1
        elif char == ")":
            count -= 1
            result.append(count + 1)
        else:
            if stack:
                stack.pop()

    while stack:
        result.append(-1)
        stack.pop()

    return result


# Remove the following line as it is not required for the contest problem
# paren_string = input("Enter the nested parentheses string: ")