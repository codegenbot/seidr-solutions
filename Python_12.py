```Python
from typing import Optional


def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


strings = []
while True:
    inp = input("Enter a string (or 'stop' to finish): ")
    if inp.lower() == 'stop':
        break
    strings.append(inp)

longest_string = longest(strings)
print(longest_string)