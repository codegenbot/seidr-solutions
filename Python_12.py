from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))


# Get input from user
input_strings = input("Enter a list of strings separated by space: ").split()

# Call the function with input_strings
result = longest(input_strings)
print(result)