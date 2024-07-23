from typing import List


def concatenate(strings: List[str]) -> str:
    return ''.join(strings)


strings = input("Enter multiple strings separated by comma (,), space ( ), or any other delimiter: ").split()

print(concatenate(strings))