from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

# Read input from the user
input_strings = input("Enter a comma-separated list of strings: ").split(',')
print(longest(input_strings))