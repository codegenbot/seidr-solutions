```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    result = ""
    for string in strings:
        if string:
            result += string + " "
    return result.strip()


if __name__ == "__main__":
    n = int(input("Enter the number of strings: "))
    strings = [input() for _ in range(n)]
    print(concatenate(strings))