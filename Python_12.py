from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

n = int(input())
strings = []
for _ in range(n):
    s = input()
    strings.append(s)

result = longest(strings)
print(result)