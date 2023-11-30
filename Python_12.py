from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

user_input = input("Enter a list of strings: ")
strings = user_input.split()
result = longest(strings)
print(result)