from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

# Get input from user
user_input = input("Enter the list of strings separated by space: ")
strings_list = user_input.split()

# Call the function with the input and print the result
result = longest(strings_list)
print(result)