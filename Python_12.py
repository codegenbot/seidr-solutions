from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), strings.index(x)))

# Get input from the user
strings = input("Enter a list of strings separated by spaces: ").split()

# Call the function with the input list
result = longest(strings)

# Print the result
print(result)