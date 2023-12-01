from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


string_list = input("Enter strings (separated by space): ").split()
result = longest(string_list)
print("Longest string: ", result)