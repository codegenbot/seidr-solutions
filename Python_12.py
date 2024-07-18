from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

# Read input from user
strings = input("Enter strings separated by space: ").split()

# Print the longest string
print(longest(strings))