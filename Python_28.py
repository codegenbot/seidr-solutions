from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = input("Enter the strings separated by a space: ").split()
result = concatenate(strings)
print(result)