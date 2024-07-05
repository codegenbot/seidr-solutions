from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    strings = input("Enter a list of strings separated by spaces: ").split()
    result = longest(strings)
    print(result)