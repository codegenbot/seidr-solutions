from typing import List, Optional

def longest(*strings) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

# Read input from the user
strings = input().split()

# Call the function and print the result
result = longest(*strings)
print(result)