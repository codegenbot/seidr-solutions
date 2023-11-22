from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = input().strip().split(",")
result = concatenate(strings)
print(result)