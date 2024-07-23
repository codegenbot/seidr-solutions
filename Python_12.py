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
    return longest_str if longest_str is not None else "No strings entered"


strings = []
while True:
    line = input("Please enter a string (or 'stop' to finish): ")
    if line.lower() == 'stop':
        break
    strings.append(line)

print(f"The longest string is: {longest(strings)}" if longest(strings) else "No strings entered")