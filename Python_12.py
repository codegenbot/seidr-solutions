```
from typing import Optional


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = 0
    longest_str = None
    for s in strings:
        s = s.strip()
        if len(s) > max_len and s != 'stop':
            max_len = len(s)
            longest_str = s
    return longest_str


strings = []
while True:
    s = input("Please enter a string (or 'stop' to finish): ")
    if s.lower() == 'stop':
        break
    strings.append(s.strip())

print("The longest string is: " + str(longest(strings)) if longest(strings) else "No strings entered")