```
from typing import Optional


def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


strings = []
n = int(input("How many strings do you want to enter? "))
for i in range(n):
    s = input("Enter a string (or 'stop' to finish): ")
    while s != 'stop':
        strings.append(s)
        if s == 'stop':
            break
        s = input("Enter a string (or 'stop' to finish): ")

longest_string = longest(strings)
print(longest_string)