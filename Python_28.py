```
from typing import List


def concatenate():
    num_strings = int(input("Enter the number of strings: "))
    strings = []
    for _ in range(num_strings):
        strings.append(input())
    return "".join(strings)