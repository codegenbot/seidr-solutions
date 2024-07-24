from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

test_cases = int(input())
for _ in range(test_cases):
    strings = input().split()
    result = longest(strings)
    print(result)