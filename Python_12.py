from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    user_input = input("Enter strings separated by spaces: ").split()
    print(longest(user_input))