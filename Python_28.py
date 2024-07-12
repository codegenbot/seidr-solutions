```
from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings_list = []
while True:
    s = input("Enter a string (or 'stop' to finish): ")
    if s.lower() == "stop":
        break
    strings_list.append(s.strip())
result = concatenate([s for s in strings_list])

print(result)