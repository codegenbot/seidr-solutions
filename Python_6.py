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

    result.extend([-1] * count)

    return result