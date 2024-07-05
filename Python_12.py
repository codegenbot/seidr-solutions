from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    import sys
    strings = []
    while True:
        line = input().strip()
        if not line:
            break
        strings.append(line)
    print(longest(strings))