from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

# Read input from the user
user_input = input("Enter a list of strings separated by space: ")
strings = user_input.split()

# Call the longest function with user input
result = longest(strings)

# Print the returned output
print(result)