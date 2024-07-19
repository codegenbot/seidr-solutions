from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

# Read input from the user
input_strings = input().split()

# Get the result by passing input to the function
result = longest(input_strings)

# Print the result
print(result)