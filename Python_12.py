```
from typing import Optional


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = 0
    longest_str = None
    for s in strings:
        if s.lower() == 'stop':
            break
        s = s.strip()
        if not s: 
            continue
        if len(s) > max_len:
            max_len = len(s)
            longest_str = s
    return longest_str


strings = []
while True:
    line = input("Please enter a string (or 'stop' to finish): ")
    if line.lower() == 'stop':
        break
    strings.append(line)

print("The longest string is: " + str(longest(strings)) if longest(strings) else "No strings entered")