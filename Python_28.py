from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = eval(input().strip())
result = concatenate(strings)
print(result)