from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if len(result) > 0:
            result += " "
        result += string
    return result

strings = input().split()
strings = [i for i in strings if i]  # remove empty strings

print(concatenate(strings))