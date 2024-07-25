from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

if __name__ == "__main__":
    strings = input("Enter strings separated by space: ").split()
    result = longest(strings)
    print(result)