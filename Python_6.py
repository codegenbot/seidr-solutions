```
from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    temp_num = ""
    for char in paren_string:
        if char == "(":
            if level > 0:
                temp_num += char
            level += 1
        elif char == ")":
            if level > 0:
                temp_num += char
            level -= 1
        elif level > 0:
            temp_num += char
            if char.isdigit():
                result.append(int(temp_num))
                temp_num = ""
        else:
            if char.isdigit():
                temp_num += char
    return [i for i in result if i > 0]