from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

n = int(input())
input_list = [input() for _ in range(n)]

result = longest(input_list)
print(result)