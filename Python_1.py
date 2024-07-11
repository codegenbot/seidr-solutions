from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == " ":
            continue
        elif char == "(":
            temp += char
        elif char == ")":
            if len(temp) > 0 and temp[0] == "(":
                temp = temp[1:] + char
            else:
                result.append(temp)
                temp = ""
    if len(temp) > 0:
        result.append(temp)
    return [x for x in map("({})".format, result)]