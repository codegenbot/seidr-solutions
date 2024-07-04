from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    try:
        strings = input().strip()[1:-1].split(',')
        strings = [s.strip().strip("'\"") for s in strings]
    except Exception:
        strings = []
    print(longest(strings))