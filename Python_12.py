```
from typing import Optional


def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


strings = []
while True:
    s = input("Enter a string (or 'stop' to finish): ")
    if s.lower() == 'stop':
        break
    strings.append(s)

longest_string = longest(strings)
print(longest_string)