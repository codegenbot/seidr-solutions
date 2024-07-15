from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

# Read input from the user
strings = input().split()

# Call the function with the input list of strings
result = longest(strings)

print(result)