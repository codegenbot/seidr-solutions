from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

# Read input from user
strings = input("Enter a list of strings separated by space: ").split()

# Call the function with user input
result = longest(strings)

# Print the result
print(result)