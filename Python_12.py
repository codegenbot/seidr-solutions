from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

# Read input from user
inputs = input("Enter strings separated by space: ").split()

# Call the longest function with the input
result = longest(inputs)
print(result)