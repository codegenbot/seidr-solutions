from typing import List


def string_xor(a: str, b: str) -> str:
    if not isinstance(a, str) or not isinstance(b, str):
        return "Error: Both inputs must be strings."
    if len(a) != len(b):
        return "Error: Inputs must have the same length."

    result = ""
    for i in range(len(a)):
        if a[i] == b[i]:
            result += "0"
        else:
            result += "1"
    return result