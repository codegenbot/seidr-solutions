import sys
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    open_brackets = 0
    for char in paren_string:
        if char == "(":
            open_brackets += 1
        temp += char
        if char == ")" and open_brackets == 1:
            result.append(temp)
            temp = ""
            open_brackets = 0
        elif char == ")":
            open_brackets -= 1
    return result

paren_string = sys.stdin.readline().strip()
print(separate_paren_groups(paren_string))