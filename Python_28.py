from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = input("Enter strings (separated by space): ")
print(f"Please enter the following and I will concatenate them for you: {strings}")
print(concatenate(map(str, strings.split())))