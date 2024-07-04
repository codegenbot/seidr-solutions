from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    strings = []
    try:
        while True:
            line = input().strip()
            if line:
                strings.append(line)
            else:
                break
    except EOFError:
        pass
    print(longest(strings))