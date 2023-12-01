from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

# Read input from the user
n = int(input())
strings = [input() for _ in range(n)]

# Call the function and print the result
result = longest(strings)
print(result)