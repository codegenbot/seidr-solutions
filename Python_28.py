```
from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        result += string
    return result


input_list = input("Enter a list of strings separated by spaces: ")
strings = [s.strip() for s in input_list.split()]
concatenate(strings)