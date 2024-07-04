from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    strings = input().strip().split(',')
    strings = [s.strip() for s in strings if s.strip()]
    print(longest(strings))