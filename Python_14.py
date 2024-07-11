```
from typing import List


def all_prefixes():
    s = input("Please enter a string: ")
    prefixes = []
    for i in range(1, len(s) + 1):
        prefixes.append(s[:i])
    return prefixes

print(all_prefixs())