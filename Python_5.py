from typing import List


def intersperse(input_string: str) -> List[str]:
    result = []
    for char in input_string:
        if char == " ":
            if len(result) > 0:
                result.append(" ")
        else:
            result.append(char)
    return result