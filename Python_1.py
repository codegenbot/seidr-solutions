from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = [paren_string]
    while any("(" in group and ")" in group for group in result):
        result = [group.replace(")(", ") (") for group in result]
    return result


paren_string = input()
output = separate_paren_groups(paren_string)
print(output)