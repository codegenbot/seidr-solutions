from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_string = strings[0]
    for string in strings:
        if len(string) > len(longest_string):
            longest_string = string
    return longest_string

# Read input from user
strings = input().split()

# Call the longest function with the input
result = longest(strings)

# Print the result
print(result)