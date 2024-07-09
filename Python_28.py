```
from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = input("Enter strings (separated by space): ")
if strings:
    print(concatenate(strings.split()))
else:
    print("No strings entered")