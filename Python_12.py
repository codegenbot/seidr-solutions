from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

# Read input from the user
string_list = input().split()

# Call the longest function with the input
result = longest(string_list)

# Print the output
print(result)