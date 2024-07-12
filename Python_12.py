from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

# Read input from user as a single string and split into a list of strings
strings = input().strip().split()

# Call the longest function with the input list of strings
result = longest(strings)

# Output the result
print(result)