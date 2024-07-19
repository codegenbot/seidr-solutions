def concatenate_strings():
    strings = input("Enter strings separated by space: ").split()
    print(concatenate(strings))


from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)