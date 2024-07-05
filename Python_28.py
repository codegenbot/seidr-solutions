from typing import List


def concatenate(strings: List[str]) -> str:
    strings = [input() for _ in range(len(input("Enter the number of strings: ")).split()[0])]
    result = ""
    for s in strings:
        result += s
    return result