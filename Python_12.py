from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), strings.index(x)))


# Read input from user
strings = input().split()

# Call the function with input
result = longest(strings)
print(result)