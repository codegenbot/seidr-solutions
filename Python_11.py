from typing import List


def string_xor(a: str, b: str) -> str:
    result = ""
    for i in range(len(a)):
        if a[i] == "1" and b[i] == "0":
            result += "1"
        elif a[i] == "0" and b[i] == "1":
            result += "1"
        else:
            result += "0"
    return result