from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_string = strings[0]
    for string in strings:
        if len(string) > len(longest_string):
            longest_string = string
    return longest_string

# Read the input from the user
input_strings = input().split(",")

# Call the longest function with the input strings
result = longest(input_strings)

# Print the result
print(result)