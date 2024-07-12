from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

strings_input = input("Enter a list of strings (comma-separated): ")

result = longest([string.strip() for string in strings_input.split(",")])
print(f"The longest string is: {result}")