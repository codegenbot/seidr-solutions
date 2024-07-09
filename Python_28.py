from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = input("Enter string(s) (separated by space): ").split()
print(concatenate(strings))