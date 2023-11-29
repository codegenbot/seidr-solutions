from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    count = 0

    for char in paren_string:
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1
            result.append(count + 1)

    while count > 0:
        result.append(-1)
        count -= 1

    return result


paren_string = input("Enter the string of parentheses: ")
print(parse_nested_parens(paren_string))