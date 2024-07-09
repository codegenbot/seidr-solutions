from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = input("Enter strings (separated by space): ").split()
if strings:
    print(concatenate(strings))
else:
    print("No strings entered.")