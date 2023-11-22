from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    counter = 0
    max_nesting = 0

    for char in paren_string:
        if char == "(":
            counter += 1
            max_nesting = max(max_nesting, counter)
        elif char == ")":
            if counter > 0:
                counter -= 1
            else:
                return []

    if counter > 0:
        return []

    result.append(max_nesting)
    return result