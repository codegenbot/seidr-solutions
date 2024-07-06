from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if len(result) > 0:
            result += " "
        result += string
    return result

strings = input("Please enter a list of strings (separated by space): ")
strings = strings.split()

print(concatenate(strings))