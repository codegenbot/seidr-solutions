import re
from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if len(result) > 0:
            result += " "
        result += string
    return result


strings = input("Please enter a list of strings (separated by any character): ")
strings = [i for i in re.split("([^\w\s]+)", strings) if i]

print(concatenate(strings))