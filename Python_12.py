from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings or all(s == '' for s in strings):
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    strings = input().strip().split()
    print(longest(strings) if strings else None)