from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    try:
        strings = input().strip().split()
        if strings:
            print(longest(strings))
        else:
            print(None)
    except EOFError:
        pass