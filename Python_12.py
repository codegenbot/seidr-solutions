from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    strings = input("Enter a list of strings separated by spaces: ").split()
    result = longest(strings)
    if result:
        print("The longest string is:", result)
    else:
        print("No strings provided.")