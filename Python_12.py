from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

if __name__ == "__main__":
    strings = input().split()
    print(longest(strings))