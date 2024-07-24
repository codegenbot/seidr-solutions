from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))


# Read a list of strings from user input
strings = input().split()

# Call the function with the input list and print the result
print(longest(strings))