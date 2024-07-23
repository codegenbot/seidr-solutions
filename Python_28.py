```
from typing import List


def concatenate():
    n = int(input("Enter the number of strings: "))
    strings = [input(f"Enter string {i+1}: ") for i in range(n)]
    if not strings:
        return ""
    return "".join(strings)

print(concatenate())