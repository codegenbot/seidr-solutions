```
from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = input("Enter strings (separated by space or comma): ")
if ',' in strings:
    strings = [s.strip() for s in strings.split(',')]
else:
    strings = strings.split()
print(concatenate(strings))