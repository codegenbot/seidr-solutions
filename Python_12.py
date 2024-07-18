from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

# Read a list of strings from the user
strings = input("Enter a list of strings separated by spaces: ").split()

# Call the longest function with the input list of strings
result = longest(strings)
print(result)