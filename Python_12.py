from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

# Get input from the user
input_strings = input("Enter a list of strings separated by spaces: ").split()

# Call the function and store the result
result = longest(input_strings)

# Print the result
print(result)