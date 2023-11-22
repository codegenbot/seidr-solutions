from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = input("Enter a comma-separated list of strings: ").split(",")
result = concatenate(strings)
print(result)