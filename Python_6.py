from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    result = []
    count = 0

    for paren in paren_string:
        if paren == "(":
            stack.append(paren)
            count += 1
        elif paren == ")":
            if count > 0:
                stack.pop()
                count -= 1
            else:
                result.append(-1)
        else:
            result.append(-1)

    while stack:
        stack.pop()
        result.append(1)

    return result