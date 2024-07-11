from typing import List


def concatenate():
    strings = input("Please enter a list of strings separated by space: ").split()
    result = ""
    for s in strings:
        result += s
    return result

print(concatenate())