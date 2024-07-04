from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    strings = [s.strip() for s in input("Enter the list of strings separated by commas: ").split(',')]
    print(longest(strings))